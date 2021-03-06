/*
   20000412-2.c from the execute part of the gcc torture tests.
 */

#include <testfwk.h>

#ifdef __SDCC
#pragma std_c99
#endif

#if !(defined (__SDCC_hc08) || defined (__SDCC_s08) || defined (__SDCC_mos6502) || defined (__SDCC_mos65c02) )
int f(int a,int *y)
{
  int x = a;

  if (a==0)
    return *y;

  return f(a-1,&x);
}
#endif

void
testTortureExecute (void)
{
#ifndef __SDCC_pic16
#if !(defined (__SDCC_mcs51) || defined (__SDCC_hc08) || defined (__SDCC_s08) || defined (__SDCC_mos6502) || defined (__SDCC_mos65c02) || defined (__SDCC_ds390) || defined (__SDCC_pdk13) || defined (__SDCC_pdk14) || defined (__SDCC_pdk15))
#if !defined(__SDCC_pic14) // Unsupported reentrancy
  if (f (10, (int *) 0) != 1)
    ASSERT (0);
  return;
#endif
#endif
#endif
}

