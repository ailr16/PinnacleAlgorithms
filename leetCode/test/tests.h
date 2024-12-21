#ifndef TESTS_H
#define TESTS_H

#include "testHandler.h"

extern SingleTestBlock array[100];
extern TestsHandler htest;

void Register_tests_twoSum(void);
void Register_tests_addTwoNumbers(void);
void Register_tests_isPalindrome(void);
void Register_tests_reverse(void);
void Register_tests_reverseBits(void);
void Register_tests_hammingWeight(void);
void Register_tests_myAtoi(void);
void Register_tests_removeDuplicates(void);
void Register_tests_divide(void);
void Register_tests_reverseList(void);

#endif