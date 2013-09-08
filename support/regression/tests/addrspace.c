/** addrsapce.c
*/
#include <testfwk.h>
#include <stdlib.h>

void set_a(void)
{
}

void set_b(void)
{
}

__addressmod set_a space_a;
__addressmod set_b const space_b;

/* We don't really test for named address spaces working here,
   since that would require support in the simulators, and would
   make the test target-specific.
   But we can test that things that should compile compile, and that
   the named address spaces don't break other things.
*/

void testSpace(void)
{
}

