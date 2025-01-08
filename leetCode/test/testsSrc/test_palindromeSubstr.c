#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__palindromeSubstr_t1(void) {
	char s[] = "babad";
	char *sret;

	sret = longestPalindrome( s );
	printf("%s\n", sret);
}

void Register_tests_palindromeSubstr(void){
    SingleTestBlock test;

	test.function = TEST__palindromeSubstr_t1;
	strcpy( test.testName, "Longest palindromic substr. Expected: xd" );
	registerTest( &htest, &test );
}