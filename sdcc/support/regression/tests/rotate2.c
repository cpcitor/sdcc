/** Tests covering RRC, RLC & SWAP operations

    size: 8, 16, 32
    andCase: 0, 1 , 2
    xorLiteral: 0, 1
    rotateLeft: 1, -1, 0
    structVar: 0, 1
    
    size. 32
    andCase. 0
    xorLiteral. 1
    rotateLeft. -1, 1, 0
    structVar. 0, 1
*/

#include <testfwk.h>
#ifdef __sun__
#include <inttypes.h>
#else
#include <stdint.h>
#endif

#define SIZE ({size})
#define AND_CASE ({andCase})
#define XOR_LITERAL ({xorLiteral})
#define ROTATE_LEFT ({rotateLeft})
#define STRUCT_VAR ({structVar})

#if SIZE == 8
    #define TYPE uint8_t
    #define TEST_VALUE 0x5B
    #if AND_CASE == 2
        #define AND_VALUE 0xFE
    #elif AND_CASE == 1
        #define AND_VALUE 0xEF
    #else
        #undef AND_VALUE
    #endif
#endif

#if SIZE == 16
    #define TYPE uint16_t
    #define TEST_VALUE 0x3579
    #if AND_CASE == 2
        #define AND_VALUE 0xFEFF
    #elif AND_CASE == 1
        #define AND_VALUE 0xFFEF
    #else
        #undef AND_VALUE
    #endif
#endif

#if SIZE == 32
    #define TYPE uint32_t
    #define TEST_VALUE 0x13579BDF
    #if AND_CASE == 2
        #define AND_VALUE 0xFEFFFEFF
    #elif AND_CASE == 1
        #define AND_VALUE 0xFFEFFFEF
    #else
        #undef AND_VALUE
    #endif
#endif

#if ROTATE_LEFT == 1
    #define SHIFT_R (SIZE - 1)
    #define SHIFT_L 1
    
#elif ROTATE_LEFT == -1
    #define SHIFT_R 1
    #define SHIFT_L (SIZE - 1)
#elif ROTATE_LEFT == 0
    #define SHIFT_R (SIZE / 2)
    #define SHIFT_L (SIZE / 2)
#else
    #error "UNKNOWN SHIFT CASE"
#endif

#ifdef AND_VALUE
    #define AND_OPERATION & AND_VALUE
#else
    #define AND_OPERATION
#endif

#define XOR_VALUE 0x24

#if XOR_LITERAL
    #define rotate_test_value_xor XOR_VALUE
#else
    volatile TYPE rotate_test_value_xor = XOR_VALUE;
#endif

#define ROTATE_RESULT     ((TYPE)(((TEST_VALUE << SHIFT_L) | (TEST_VALUE >> SHIFT_R)) AND_OPERATION))
#define ROTATE_RESULT_XOR ((TYPE)((((TEST_VALUE ^ XOR_VALUE) << SHIFT_L) | ((TEST_VALUE ^ XOR_VALUE) >> SHIFT_R)) AND_OPERATION))

#if STRUCT_VAR
  typedef struct
  {
    TYPE rotate_test_value1;
    TYPE rotate_test_value2;
  }rotate_test_struct_;
  
  rotate_test_struct_ rotate_test_struct;
  #define rotate_test_value rotate_test_struct.rotate_test_value2
#else
  TYPE rotate_test_value;
#endif

TYPE rotate_test_1(TYPE value)
{
    return ((value << SHIFT_L) | (value >> SHIFT_R)) AND_OPERATION;
}

TYPE rotate_test_1_xor1(TYPE value)
{
    value = value ^ rotate_test_value_xor;
    return ((value << SHIFT_L) | (value >> SHIFT_R)) AND_OPERATION;
}

TYPE rotate_test_1_xor2(TYPE value)
{
    return (((value ^ rotate_test_value_xor) << SHIFT_L) | ((value ^ rotate_test_value_xor) >> SHIFT_R)) AND_OPERATION;
}

#ifndef __SDCC_pdk14 // Lack of memory

TYPE rotate_test_2(TYPE value)
{
    TYPE value2 = value;
    return ((value2 << SHIFT_L) | (value2 >> SHIFT_R)) AND_OPERATION;
}

TYPE rotate_test_2_xor1(TYPE value)
{
    TYPE value2 = value ^ rotate_test_value_xor;
    return ((value2 << SHIFT_L) | (value2 >> SHIFT_R)) AND_OPERATION;
}

TYPE rotate_test_2_xor2(TYPE value)
{
    TYPE value2 = value;
    return (((value2 ^ rotate_test_value_xor) << SHIFT_L) | ((value2 ^ rotate_test_value_xor) >> SHIFT_R)) AND_OPERATION;
}

TYPE rotate_test_3(TYPE value)
{
    volatile TYPE value2 = value;
    value2 = ((value2 << SHIFT_L) | (value2 >> SHIFT_R)) AND_OPERATION;
    return value2;
}

TYPE rotate_test_3_xor1(TYPE value)
{
    volatile TYPE value2 = value ^ rotate_test_value_xor;
    value2 = ((value2 << SHIFT_L) | (value2 >> SHIFT_R)) AND_OPERATION;
    return value2;
}

TYPE rotate_test_3_xor2(TYPE value)
{
    volatile TYPE value2 = value;
    value2 = (((value2 ^ rotate_test_value_xor) << SHIFT_L) | ((value2 ^ rotate_test_value_xor) >> SHIFT_R)) AND_OPERATION;
    return value2;
}

#ifndef __SDCC_pdk15 // Lack of memory

TYPE rotate_test_4(TYPE value)
{
    rotate_test_value = value;
    rotate_test_value = ((rotate_test_value << SHIFT_L) | (rotate_test_value >> SHIFT_R)) AND_OPERATION;
    return rotate_test_value;
}

TYPE rotate_test_4_xor1(TYPE value)
{
    rotate_test_value = value ^ rotate_test_value_xor;
    rotate_test_value = ((rotate_test_value << SHIFT_L) | (rotate_test_value >> SHIFT_R)) AND_OPERATION;
    return rotate_test_value;
}

TYPE rotate_test_4_xor2(TYPE value)
{
    rotate_test_value = value;
    rotate_test_value = (((rotate_test_value ^ rotate_test_value_xor) << SHIFT_L) | ((rotate_test_value ^ rotate_test_value_xor) >> SHIFT_R)) AND_OPERATION;
    return rotate_test_value;
}

rotate_test_load(TYPE value)
{
    rotate_test_value = value;
}

TYPE rotate_test_5(TYPE value)
{
    rotate_test_load (value);
    rotate_test_value = ((rotate_test_value << SHIFT_L) | (rotate_test_value >> SHIFT_R)) AND_OPERATION;
    return rotate_test_value;
}

TYPE rotate_test_5_xor1(TYPE value)
{
    rotate_test_load (value ^ rotate_test_value_xor);
    rotate_test_value = ((rotate_test_value << SHIFT_L) | (rotate_test_value >> SHIFT_R)) AND_OPERATION;
    return rotate_test_value;
}

TYPE rotate_test_5_xor2(TYPE value)
{
    rotate_test_load (value);
    rotate_test_value = (((rotate_test_value ^ rotate_test_value_xor) << SHIFT_L) | ((rotate_test_value ^ rotate_test_value_xor) >> SHIFT_R)) AND_OPERATION;
    return rotate_test_value;
}
#endif
#endif

static void
testSwaps(void)
{
#ifndef __SDCC_pdk14 // Lack of memory
    volatile TYPE t = TEST_VALUE;
    TYPE u;
    
    u = t;

    ASSERT( rotate_test_1(u)      == ROTATE_RESULT);
    ASSERT( rotate_test_1_xor1(u) == ROTATE_RESULT_XOR);
    ASSERT( rotate_test_1_xor2(u) == ROTATE_RESULT_XOR);
  
    ASSERT( rotate_test_2(u)      == ROTATE_RESULT);
    ASSERT( rotate_test_2_xor1(u) == ROTATE_RESULT_XOR);
    ASSERT( rotate_test_2_xor2(u) == ROTATE_RESULT_XOR);

    ASSERT( rotate_test_3(u)      == ROTATE_RESULT);
    ASSERT( rotate_test_3_xor1(u) == ROTATE_RESULT_XOR);
    ASSERT( rotate_test_3_xor2(u) == ROTATE_RESULT_XOR);

#ifndef __SDCC_pdk15 // Lack of memory
    ASSERT( rotate_test_4(u)      == ROTATE_RESULT);
    ASSERT( rotate_test_4_xor1(u) == ROTATE_RESULT_XOR);
    ASSERT( rotate_test_4_xor2(u) == ROTATE_RESULT_XOR);
    
    ASSERT( rotate_test_5(u)      == ROTATE_RESULT);
    ASSERT( rotate_test_5_xor1(u) == ROTATE_RESULT_XOR);
    ASSERT( rotate_test_5_xor2(u) == ROTATE_RESULT_XOR);
#endif
#endif
}

