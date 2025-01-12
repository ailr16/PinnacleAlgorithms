#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__myAtoi_42(void) {
	printf("%d\n", myAtoi("42"));
}

void TEST__myAtoi_minus42withSpaces(void) {
	printf("%d\n", myAtoi("    -42"));
}

void TEST__myAtoi_4193withWords(void) {
	printf("%d\n", myAtoi("4193with words"));
}

void TEST__myAtoi_words987(void) {
	printf("%d\n", myAtoi("words and 987"));
}

void TEST__myAtoi_0minus1(void) {
	printf("%d\n", myAtoi("0-1"));
}

void Register_tests_myAtoi(void){
	SingleTestBlock test;

	test.function = TEST__myAtoi_42;
	strcpy( test.testName, "My Atoi. In: 42, Expected: 42" );
	registerTest( &htest, &test );

	test.function = TEST__myAtoi_minus42withSpaces;
	strcpy( test.testName, "My Atoi. In:     -42, Expected: -42" );
	registerTest( &htest, &test );

	test.function = TEST__myAtoi_4193withWords;
	strcpy( test.testName, "My Atoi. In: 4193with words, Expected: 4193" );
	registerTest( &htest, &test );

	test.function = TEST__myAtoi_words987;
	strcpy( test.testName, "My Atoi. In: words and 987, Expected: 0" );
	registerTest( &htest, &test );

	test.function = TEST__myAtoi_0minus1;
	strcpy( test.testName, "My Atoi. In:0-1, Expected: 0" );
	registerTest( &htest, &test );
}