#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__twoSum1__1_2(void) {
	int nums[3] = { 3, 2, 4};
	int* result;
	int returnSize;

	result = twoSum(nums, 3, 6, &returnSize);
	printf("%d %d\n", result[0], result[1]);
	free(result);
}

void TEST__twoSum1__1_3(void) {
	int nums[4] = { 3, 2, 4, 7};
	int* result;
	int returnSize;

	result = twoSum(nums, 4, 9, &returnSize);
	printf("%d %d\n", result[0], result[1]);
	free(result);
}

void Register_tests_twoSum(void){
	SingleTestBlock test;

	test.function = TEST__twoSum1__1_2;
	strcpy( test.testName, "Two Sum. Expected: 1 2" );
	registerTest( &htest, &test );

	test.function = TEST__twoSum1__1_3;
	strcpy( test.testName, "Two Sum. Expected: 1 3" );
	registerTest( &htest, &test );

}