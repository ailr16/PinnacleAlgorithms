#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
	free(result);
}


/**
 * Problem 2
 */
struct ListNode {
	int val;
	struct ListNode* next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
	struct ListNode* returnValue = NULL;
	struct ListNode* temp = NULL;

	struct ListNode* i1 = l1;
	struct ListNode* i2 = l2;

	char carry = 0;
	int sum = 0;

	while (i1 || i2 || carry) {
		if (i1) {
			sum += i1->val;
			i1 = i1->next;
		}

		if (i2) {
			sum += i2->val;
			i2 = i2->next;
		}

		if (carry) {
			sum++;
			carry = 0;
		}

		if (sum > 9) {
			carry = 1;
			sum = sum % 10;
		}

		struct ListNode* newNode = malloc(sizeof(struct ListNode));
		if (newNode) newNode->val = sum;

		if (returnValue) {
			temp->next = newNode;
			temp = newNode;
		}
		else {
			returnValue = temp = newNode;
		}

		sum = 0;
	}
	
	if (temp) temp->next = NULL;
	return returnValue;
}

void addTwoNumbersTest(void) {
	struct ListNode* result;

	struct ListNode l1d = { .val = 1, .next = NULL };
	struct ListNode l1  = { .val = 1, .next = &l1d };

	struct ListNode l2d = { .val = 9, .next = NULL };
	struct ListNode l2c = { .val = 9, .next = &l2d };
	struct ListNode l2b = { .val = 9, .next = &l2c };
	struct ListNode l2  = { .val = 9, .next = &l2b };

	result = addTwoNumbers(&l1, &l2);
	
	struct ListNode* i = result;

	while (i) {
		printf("%d\n", i->val);
		i = i->next;
	}
}


bool isPalindrome(int x) {
	long reversedNumber = 0;
	int originalNumber = x;

	if (x < 0)
		return false;

	while (x != 0) {
		reversedNumber *= 10;
		reversedNumber += x % 10;
		x /= 10;
	}

	if (originalNumber == reversedNumber)
		return true;
	else
		return false;
}

void isPalindromeTest(void) {
	printf("%d\n", isPalindrome(123));
	printf("%d\n", isPalindrome(12321));
	printf("%d\n", isPalindrome(121));
	printf("%d\n", isPalindrome(-121));
}

int main() {
	isPalindromeTest();
	return 0;
}