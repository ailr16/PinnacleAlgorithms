#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__reverse(void) {
	printf("%d\n", reverse(123));
	printf("%d\n", reverse(-123));
	printf("%d\n", reverse(120));
	printf("%d\n", reverse(10008000));
	printf("%d\n", reverse(-10008000));
	printf("%d\n", reverse(2147483647));
	printf("%d\n", reverse(-2147483647));
	printf("%d\n", reverse(746384749));
	printf("%d\n", reverse(1534236469));
}

void Register_tests_reverse(void){
    SingleTestBlock test;

	test.function = TEST__reverse;
	strcpy( test.testName, "Reverse. Expected:" );
	registerTest( &htest, &test );
}