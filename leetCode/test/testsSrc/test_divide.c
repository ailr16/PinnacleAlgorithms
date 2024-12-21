#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__divide(void) {
	printf("%d\n", divide(-10, -3));
	printf("%d\n", divide(-2147483647, -1));
	printf("%d\n", divide(2147483647, -1));
}


void Register_tests_divide(void){
    SingleTestBlock test;

	test.function = TEST__divide;
	strcpy( test.testName, "Divide. Expected:" );
	registerTest( &htest, &test );
}