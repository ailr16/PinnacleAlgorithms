#include <stdio.h>
#include <stdlib.h>

/**
 * Problem 1
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i, j;

	*returnSize = 2;

	int* returnArray = (int*)malloc(*returnSize * sizeof(int));
	if (returnArray == NULL) {
		*returnSize = 0;
		return NULL;
	}
	
	for (i = 0; i < numsSize; i++) {
		for (j = i + 1; j < numsSize; j++) {
			if ((nums[i] + nums[j]) == target) {
				returnArray[0] = i;
				returnArray[1] = j;
				return returnArray;
			}
		}
	}
	*returnSize = 0;
	return NULL;
}

void twoSumTest(void) {
	int nums[3] = { 3, 2, 4};
	int* result;
	int returnSize;

	result = twoSum(nums, 3, 6, &returnSize);
	printf("%d %d\n", result[0], result[1]);
}

int main() {
	twoSumTest();
	return 0;
}