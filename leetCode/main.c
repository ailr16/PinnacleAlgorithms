#include "general.h"
#include "solutions.h"
#include "tests.h"

SingleTestBlock array[100];
TestsHandler    htest;

int main() {
	SingleTestBlock tempTest;

	initTests( &htest, array );

	
    #if TWO_SUM
    Register_tests_twoSum();
    #endif

    #if ADD_TWO_NUMBERS
    Register_tests_addTwoNumbers();
    #endif

    #if LONGEST_SUBSTR
    Register_tests_longestSubStr();
    #endif

    #if MEDIAN_SORTED
    Register_tests_medianSorted();
    #endif

    #if IS_PALINDROME
    Register_tests_isPalindrome();
    #endif

    #if REVERSE
    Register_tests_reverse();
    #endif

    #if REVERSE_BITS
    Register_tests_reverseBits();
    #endif

    #if HAMMING_WEIGHT
    Register_tests_hammingWeight();
    #endif

    #if MY_ATOI
    Register_tests_myAtoi();
    #endif

    #if REMOVE_DUPLICATES
    Register_tests_removeDuplicates();
    #endif

    #if DIVIDE
    Register_tests_divide();
    #endif

    #if REVERSE_LIST
    Register_tests_reverseList();
    #endif


	runTests( &htest );

	return 0;
}