#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__longestSubStr_2char(void) {
	char str[] = "Hello";
    printf("%d\n", lengthOfLongestSubstring(str) );
}

void TEST__longestSubStr_3char(void) {
	char str[] = "abcabcbb";
    printf("%d\n", lengthOfLongestSubstring(str) );
}

void TEST__longestSubStr_1char(void) {
	char str[] = "bbbbb";
    printf("%d\n", lengthOfLongestSubstring(str) );
}

void TEST__longestSubStr_6char(void) {
	char str[] = "hijjjjjjtjjb";
    printf("%d\n", lengthOfLongestSubstring(str) );
}


void Register_tests_longestSubStr(void){
    SingleTestBlock test;

	test.function = TEST__longestSubStr_2char;
	strcpy( test.testName, "Longest substring. Expected: 2" );
	registerTest( &htest, &test );

    test.function = TEST__longestSubStr_3char;
	strcpy( test.testName, "Longest substring. Expected: 3" );
	registerTest( &htest, &test );

    test.function = TEST__longestSubStr_1char;
	strcpy( test.testName, "Longest substring. Expected: 1" );
	registerTest( &htest, &test );

	test.function = TEST__longestSubStr_6char;
	strcpy( test.testName, "Longest substring. Expected: 6" );
	registerTest( &htest, &test );
}