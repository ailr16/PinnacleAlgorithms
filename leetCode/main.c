#include "general.h"
#include "solutions.h"
#include "tests.h"

SingleTestBlock array[100];
TestsHandler    htest;

int main() {
	SingleTestBlock tempTest;

	initTests( &htest, array );

	Register_tests_twoSum();
	Register_tests_addTwoNumbers();
	Register_tests_isPalindrome();
	Register_tests_reverse();
	Register_tests_reverseBits();
	Register_tests_hammingWeight();
	Register_tests_myAtoi();
	Register_tests_removeDuplicates();
	Register_tests_divide();
	Register_tests_reverseList();

	runTests( &htest );

	return 0;
}