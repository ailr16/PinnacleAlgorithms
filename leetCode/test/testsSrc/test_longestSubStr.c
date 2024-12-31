#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__longestSubStr_3char1(void) {
	char str[] = "Hello";
    printf("%d\n", lengthOfLongestSubstring(str) );
}

void TEST__longestSubStr_3char2(void) {
	char str[] = "abcabcbb";
    printf("%d\n", lengthOfLongestSubstring(str) );
}

void TEST__longestSubStr_1char(void) {
	char str[] = "bbbbb";
    printf("%d\n", lengthOfLongestSubstring(str) );
}

void TEST__longestSubStr_3char3(void) {
	char str[] = "hijjjjjjtjjb";
    printf("%d\n", lengthOfLongestSubstring(str) );
}

void TEST__longestSubStr_6char(void) {
	char str[] = "Helabc";
    printf("%d\n", lengthOfLongestSubstring(str) );
}

void TEST__longestSubStr_noString(void) {
	char str[] = "";
    printf("%d\n", lengthOfLongestSubstring(str) );
}

void TEST__longestSubStr_space(void) {
	char str[] = " ";
    printf("%d\n", lengthOfLongestSubstring(str) );
}

void TEST__longestSubStr_dvdf(void) {
	char str[] = "dvdf";
    printf("%d\n", lengthOfLongestSubstring(str) );
}


void Register_tests_longestSubStr(void){
    SingleTestBlock test;

	test.function = TEST__longestSubStr_3char1;
	strcpy( test.testName, "Longest substring. Expected: 3" );
	registerTest( &htest, &test );

    test.function = TEST__longestSubStr_3char2;
	strcpy( test.testName, "Longest substring. Expected: 3" );
	registerTest( &htest, &test );

    test.function = TEST__longestSubStr_1char;
	strcpy( test.testName, "Longest substring. Expected: 1" );
	registerTest( &htest, &test );

	test.function = TEST__longestSubStr_3char3;
	strcpy( test.testName, "Longest substring. Expected: 3" );
	registerTest( &htest, &test );

	test.function = TEST__longestSubStr_6char;
	strcpy( test.testName, "Longest substring. Expected: 6" );
	registerTest( &htest, &test );

	test.function = TEST__longestSubStr_noString;
	strcpy( test.testName, "No string. Expected: 0" );
	registerTest( &htest, &test );

	test.function = TEST__longestSubStr_space;
	strcpy( test.testName, "Just a space. Expected: 1" );
	registerTest( &htest, &test );

	test.function = TEST__longestSubStr_dvdf;
	strcpy( test.testName, "dvdf leetcode test. Expected: 3" );
	registerTest( &htest, &test );
}