#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__medianSorted(void) {
    int a[2] = { 1, 2 };
    int b[2] = { 3, 4 };
    double result;

    result = findMedianSortedArrays( a, 2, b, 2);
    printf("%f\n", result);
}

void Register_tests_medianSorted(void){
	SingleTestBlock test;

	test.function = TEST__medianSorted;
	strcpy( test.testName, "Median sorted. Expected: 2.5" );
	registerTest( &htest, &test );
}