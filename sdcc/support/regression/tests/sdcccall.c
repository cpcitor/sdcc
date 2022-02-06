/*
   sdcccall.c. Test support for differnrt ABI versions.
   typearg: unsigned char, unsigned int
   typeret: unsigned char, unsigned int
   version: 0, 1
 */

#include <testfwk.h>

#if (defined(__SDCC_stm8) || defined(__SDCC_sm83) || defined(__SDCC_z80) || defined(__SDCC_z80n) || defined(__SDCC_z180))
#define SDCCCALL __sdcccall({version})
#else
#define SDCCCALL
#endif

{typeret} f({typearg} i) SDCCCALL
{
	return ++i;
}

{typeret} g({typearg} i, unsigned int j) SDCCCALL
{
	return i + j;
}

{typeret} h({typearg} i, unsigned int j, unsigned long long k) SDCCCALL
{
	return i + j + k;
}

{typeret} f_wrap_default({typearg} i)
{
	return f(i);
}

{typeret} f_wrap_explicit({typearg} i) SDCCCALL
{
	return f(i);
}

void
testCallingConvention(void)
{
  ASSERT(f(23) == ({typeret})24);
  ASSERT(g(23, 1001u) == ({typeret})1024ul);
  ASSERT(h(23, 1001u, 10000000000ul) == ({typeret})10000001024ull);
  ASSERT(f_wrap_default(23) == ({typeret})24);
  ASSERT(f_wrap_explicit(23) == ({typeret})24);
}

