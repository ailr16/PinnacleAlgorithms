#include "removeDuplicates.h"

void printArray(int* array, int arraySize) {
	printf("[ ");
	for (int i = 0; i < arraySize; i++) {
		printf("%d ", array[i]);
	}
	printf("]\n");
}

/**
 * Problem 26
 * Remove duplicates from sorted array
 */
int removeDuplicates(int* nums, int numsSize) {
	int size = 1;

	if (numsSize == 0)	return 0;

	for (int i = 1; i < numsSize; i++) {
		if (nums[i] != nums[i - 1]) {
			nums[size] = nums[i];
			size++;
		}
	}

	return size;
}