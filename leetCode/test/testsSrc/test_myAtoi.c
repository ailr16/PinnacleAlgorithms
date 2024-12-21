#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__myAtoi(void) {
	printf("%d\n", myAtoi("42"));
	printf("%d\n", myAtoi("    -42"));
	printf("%d\n", myAtoi("4193with words"));
	printf("%d\n", myAtoi("words and 987"));
}

void Register_tests_myAtoi(void){
	SingleTestBlock test;

	test.function = TEST__myAtoi;
	strcpy( test.testName, "My Atoi. Expected: " );
	registerTest( &htest, &test );

}