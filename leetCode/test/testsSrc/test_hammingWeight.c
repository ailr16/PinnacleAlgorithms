#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__hammingWeight() {
	printf("%d\n", hammingWeight(11));
	printf("%d\n", hammingWeight(128));
	printf("%d\n", hammingWeight(2147483645));
}


void Register_tests_hammingWeight(void){
    SingleTestBlock test;

	test.function = TEST__hammingWeight;
	strcpy( test.testName, "Hamming Weight. Expected:" );
	registerTest( &htest, &test );
}