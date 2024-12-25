#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__longestSubStr_2char(void) {
	char str[] = "Hello";
    printf("%d\n", lengthOfLongestSubstring(str) );
}

void Register_tests_longestSubStr(void){
    SingleTestBlock test;

	test.function = TEST__longestSubStr_2char;
	strcpy( test.testName, "Longest substring. Expected: 2" );
	registerTest( &htest, &test );
}