#ifndef TESTS_H
#define TESTS_H

#include "testHandler.h"

#define TWO_SUM             0
#define ADD_TWO_NUMBERS     1
#define IS_PALINDROME       0
#define REVERSE             0
#define REVERSE_BITS        0
#define HAMMING_WEIGHT      0
#define MY_ATOI             0
#define REMOVE_DUPLICATES   0
#define DIVIDE              0
#define REVERSE_LIST        0

extern SingleTestBlock array[100];
extern TestsHandler htest;

#if TWO_SUM
void Register_tests_twoSum(void);
#endif

#if ADD_TWO_NUMBERS
void Register_tests_addTwoNumbers(void);
#endif

#if IS_PALINDROME
void Register_tests_isPalindrome(void);
#endif

#if REVERSE
void Register_tests_reverse(void);
#endif

#if REVERSE_BITS
void Register_tests_reverseBits(void);
#endif

#if HAMMING_WEIGHT
void Register_tests_hammingWeight(void);
#endif

#if MY_ATOI
void Register_tests_myAtoi(void);
#endif

#if REMOVE_DUPLICATES
void Register_tests_removeDuplicates(void);
#endif

#if DIVIDE
void Register_tests_divide(void);
#endif

#if REVERSE_LIST
void Register_tests_reverseList(void);
#endif


#endif