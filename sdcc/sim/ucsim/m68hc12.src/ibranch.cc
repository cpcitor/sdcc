/*
 * Simulator of microcontrollers (ibranch.cc)
 *
 * Copyright (C) @@S@@,@@Y@@ Drotos Daniel, Talker Bt.
 * 
 * To contact author send email to drdani@mazsola.iit.uni-miskolc.hu
 *
 */

/* This file is part of microcontroller simulator: ucsim.

UCSIM is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

UCSIM is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with UCSIM; see the file COPYING.  If not, write to the Free
Software Foundation, 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA. */

#include "m68hc12cl.h"

int
CL12::call_e(void)
{
  u8_t h, l, p;
  u16_t a;
  h= fetch();
  l= fetch();
  p= fetch();
  a= h*256+l;

  h= PC>>8;
  l= PC&0xff;
  cSP.W(rSP-1);
  rom->write(rSP, l);
  cSP.W(rSP-1);
  rom->write(rSP, h);
  cSP.W(rSP-1);
  rom->write(rSP, cpu12->ppage_read());
  
  cpu12->ppage_write(p);
  PC= a;
  
  return resGO;
}

int
CL12::call_id(void)
{
  u8_t p, xb, h, l;
  xb= rom->read(PC);
  u16_t a= naddr(NULL, &p);
  if (!xb_indirect(xb))
    p= fetch();
  
  h= PC>>8;
  l= PC&0xff;
  cSP.W(rSP-1);
  rom->write(rSP, l);
  cSP.W(rSP-1);
  rom->write(rSP, h);
  cSP.W(rSP-1);
  rom->write(rSP, cpu12->ppage_read());
  
  cpu12->ppage_write(p);
  PC= a;
  
  return resGO;
}

int
CL12::brset(class cl_memory_cell &m)
{
  u8_t mask= fetch();
  i8_t r= fetch();
  if ((~(m.R()) & mask) == 0)
    {
      PC+= r;
      PC&= 0xffff;
    }
  return resGO;
}

int
CL12::brset_d(void)
{
  class cl_memory_cell &m= dir();
  return brset(m);  
}

int
CL12::brset_id(void)
{
  class cl_memory_cell &m= xb();
  return brset(m);
}

int
CL12::brset_e(void)
{
  class cl_memory_cell &m= ext();
  return brset(m);
}

int
CL12::brclr(class cl_memory_cell &m)
{
  u8_t mask= fetch();
  i8_t r= fetch();
  if (((m.R()) & mask) == 0)
    {
      PC+= r;
      PC&= 0xffff;
    }
  return resGO;
}

int
CL12::brclr_d(void)
{
  class cl_memory_cell &m= dir();
  return brclr(m);  
}

int
CL12::brclr_id(void)
{
  class cl_memory_cell &m= xb();
  return brclr(m);
}

int
CL12::brclr_e(void)
{
  class cl_memory_cell &m= ext();
  return brclr(m);
}

int
CL12::branch(t_addr a, bool cond)
{
  if (cond)
    {
      PC= a&0xffff;
      extra_ticks+= 2;
    }
  return resGO;
}


/* ENd of m68hc12.src/ibranch.cc */
