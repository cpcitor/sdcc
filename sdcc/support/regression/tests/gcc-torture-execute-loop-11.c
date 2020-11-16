/*
   loop-11.c from the execute part of the gcc torture tests.
 */

#include <testfwk.h>

#ifdef __SDCC
#pragma std_c99
#endif

#if !defined(__SDCC_mcs51) && !defined(__SDCC_pdk14) // Lack of memory
static int a[199];

static void
foo ()
{
  int i;
  for (i = 198; i >= 0; i--)
    a[i] = i;
}
#endif

void
testTortureExecute (void)
{
#if !defined(__SDCC_mcs51) && !defined(__SDCC_pdk14) // Lack of memory
  int i;
  foo ();
  for (i = 0; i < 199; i++)
    if (a[i] != i)
      ASSERT (0);
#endif
  return;
}
