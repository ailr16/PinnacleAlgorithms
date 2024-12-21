#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__isPalindromeTest(void) {
	printf("%d\n", isPalindrome(123));
	printf("%d\n", isPalindrome(12321));
	printf("%d\n", isPalindrome(121));
	printf("%d\n", isPalindrome(-121));
}

void Register_tests_isPalindrome(void){
    SingleTestBlock test;

	test.function = TEST__isPalindromeTest;
	strcpy( test.testName, "Is Palindrome. Expected: 0 1 1 0" );
	registerTest( &htest, &test );
}