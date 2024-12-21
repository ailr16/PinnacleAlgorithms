#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__reverseBits() {
	printf("%d\n", reverseBits(10));
	printf("%d\n", reverseBits(188));
	printf("%d\n", reverseBits(31890));
}


void Register_tests_reverseBits(void){
    SingleTestBlock test;

	test.function = TEST__reverseBits;
	strcpy( test.testName, "Reverse Bits. Expected:" );
	registerTest( &htest, &test );
}