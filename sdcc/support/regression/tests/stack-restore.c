/** Check stack restore optimizations for STM8.
    Should work ok for all other ports as long as enough memory is available for the tests.
    Check with all levels of optimization (speed, size and balanced).
    
    optSize: -1, 0, 1
*/

#include <testfwk.h>
#ifdef __sun__
#include <inttypes.h>
#else
#include <stdint.h>
#endif

#define OPT_SIZE ({optSize})

#if OPT_SIZE == -1
    #pragma opt_code_speed
#elif OPT_SIZE == 1
    #pragma opt_code_size
#else
    #pragma opt_code_balanced
#endif


// Test for size = 1 byte
// It must assing global variable from input param and return 0
// The case for STM8 can be triggered by a local array of size 1 or a local volatile
static volatile char globalValue;
uint8_t 
stack_restore_test_byte(const char s)
{
    char a[1];
    a[0] = s;
    globalValue = a[0];
    //volatile char dummy;
    //dummy = s;
    //globalValue = s;
    return 0;
}

#if !defined(__SDCC_mcs51) && !defined(__SDCC_pdk14) && !defined(__SDCC_pdk15) && !defined(__SDCC_pic14) // Lack of memory
    // Test for size = 2 bytes
    // Big stack needed (>256 bytes)
    // Should assert ok 256 times
    // Returns number of cases ok for double check
    #define stack_restore_test_word test_stack_restore_word
    
    uint16_t 
    stack_restore_test_word(void)
    {
        uint16_t x[256];
        int i;
        uint16_t casesOk = 0;
        
        for (i = 0; i < 256; i++)
        {
            x[i] = i;
        }
        for (i = 0; i < 256; i++)
        {
            ASSERT (x[i] == i);
            casesOk += x[i] == i;
        }
        return casesOk;
    }
#endif


static void
testStackRestore(void)
{   
    globalValue = 0;
    ASSERT(stack_restore_test_byte(0x5C) == 0);
    ASSERT(globalValue == 0x5C);
    
    #ifdef stack_restore_test_word
        ASSERT(stack_restore_test_word() == 256);
    #endif
}

