/*-------------------------------------------------------------------------
   malloc.c - allocate memory.

   Copyright (C) 2015, Philipp Klaus Krause, pkk@spth.de

   This library is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the
   Free Software Foundation; either version 2, or (at your option) any
   later version.

   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License 
   along with this library; see the file COPYING. If not, write to the
   Free Software Foundation, 51 Franklin Street, Fifth Floor, Boston,
   MA 02110-1301, USA.

   As a special exception, if you link this library with other files,
   some of which are compiled with SDCC, to produce an executable,
   this library does not by itself cause the resulting executable to
   be covered by the GNU General Public License. This exception does
   not however invalidate any other reasons why the executable file
   might be covered by the GNU General Public License.
-------------------------------------------------------------------------*/

#include <stdlib.h>
#include <stddef.h>

#if defined(__SDCC_mcs51) || defined(__SDCC_ds390) || defined(__SDCC_ds400)
#define XDATA __xdata
#else
#define XDATA
#endif

typedef struct header XDATA header_t;

struct header
{
	header_t *next;
	header_t *next_free; // Next free block. Used in free blocks only. Overlaps with user data in non-free blocks.
};

header_t *XDATA __sdcc_heap_free;

#if defined(__SDCC_mcs51) || defined(__SDCC_ds390) || defined(__SDCC_ds400) || defined(__SDCC_hc08) || defined(__SDCC_s08)

extern XDATA char _sdcc_heap[];
extern const unsigned int _sdcc_heap_size;
#define HEAP_START (struct header XDATA *)_sdcc_heap
#define HEAP_END (struct header XDATA *)((char XDATA *)_sdcc_heap + (_sdcc_heap_size - 1)) // -1 To be sure that HEAP_END is bigger than HEAP_START.

#else

extern header_t _sdcc_heap_start;
extern header_t _sdcc_heap_end; // Just beyond the end of the heap. Must be higher in memory than _sdcc_heap_start.
#define HEAP_START &_sdcc_heap_start
#define HEAP_END &_sdcc_heap_end

#endif

void _sdcc_heap_init(void)
{
	__sdcc_heap_free = HEAP_START;
	__sdcc_heap_free->next = HEAP_END;
	__sdcc_heap_free->next_free = HEAP_END;
}

void XDATA *malloc(size_t size)
{
	header_t *h;
	header_t *XDATA *f;

	if(!__sdcc_heap_free)
		_sdcc_heap_init();

	if(!size)
		return(0);
	size += offsetof(struct header, next_free);
	if(size < sizeof(struct header)) // Requiring a minimum size makes it easier to implement free(), and avoid memory leaks.
		size = sizeof(struct header);

	for(h = __sdcc_heap_free, f = &__sdcc_heap_free; h < HEAP_END; f = &(h->next_free), h = h->next_free)
	{
		size_t blocksize = (char XDATA *)(h->next) - (char XDATA *)h;
		if(blocksize >= size) // Found free block of sufficient size.
		{
			if(blocksize >= size + sizeof(struct header)) // It is worth creating a new free block
			{
				header_t *const newheader = (header_t *const)((char XDATA*)h + size);
				newheader->next = h->next;
				newheader->next_free = h->next_free;
				*f = newheader;
				h->next = newheader;
			}
			else
				*f = h->next_free;

			return(&(h->next_free));
		}
	}

	return(0);
}

