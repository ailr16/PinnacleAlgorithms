#include "general.h"
#include "solutions.h"
#include "tests.h"

void TEST__removeDuplicates(void) {
	int array1[3] = { 1,1,2 };
	int array2[10] = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
	int array3[16] = { 0, 0, 0, 0, 0, 1, 1, 2, 3, 4, 5, 5, 6, 18, 100, 112};

	int array1Size = removeDuplicates(array1, 3);
	printf("%d\t", array1Size);
	printArray(array1, array1Size);

	int array2Size = removeDuplicates(array2, 10);
	printf("%d\t", array2Size);
	printArray(array2, array2Size);

	int array3Size = removeDuplicates(array3, 16);
	printf("%d\t", array3Size);
	printArray(array3, array3Size);
}

void Register_tests_removeDuplicates(void){
    SingleTestBlock test;

	test.function = TEST__removeDuplicates;
	strcpy( test.testName, "Remove Duplicates. Expected:" );
	registerTest( &htest, &test );
}