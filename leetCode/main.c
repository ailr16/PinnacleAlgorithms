#include "general.h"
#include "solutions.h"

void twoSumTest(void) {
	int nums[3] = { 3, 2, 4};
	int* result;
	int returnSize;

	result = twoSum(nums, 3, 6, &returnSize);
	printf("%d %d\n", result[0], result[1]);
	free(result);
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


void isPalindromeTest(void) {
	printf("%d\n", isPalindrome(123));
	printf("%d\n", isPalindrome(12321));
	printf("%d\n", isPalindrome(121));
	printf("%d\n", isPalindrome(-121));
}


void reverseTest(void) {
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


void reverseBitsTest() {
	printf("%d\n", reverseBits(10));
	printf("%d\n", reverseBits(188));
	printf("%d\n", reverseBits(31890));
}

void hammingWeightTest(void) {
	printf("%d\n", hammingWeight(11));
	printf("%d\n", hammingWeight(128));
	printf("%d\n", hammingWeight(2147483645));
}


void myAtoiTest(void) {
	printf("%d\n", myAtoi("42"));
	printf("%d\n", myAtoi("    -42"));
	printf("%d\n", myAtoi("4193with words"));
	printf("%d\n", myAtoi("words and 987"));
}

void removeDuplicatesTest(void) {
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

void divideTest(void) {
	printf("%d\n", divide(-10, -3));
	printf("%d\n", divide(-2147483647, -1));
	printf("%d\n", divide(2147483647, -1));
}


void reverseListTest(void) {
	struct ListNode* result;

	struct ListNode l1f = { .val = 4, .next = NULL };
	struct ListNode l1e = { .val = 4, .next = &l1f };
	struct ListNode l1d = { .val = 4, .next = &l1e };
	struct ListNode l1c = { .val = 3, .next = &l1d };
	struct ListNode l1b = { .val = 2, .next = &l1c };
	struct ListNode l1 = { .val = 1, .next = &l1b };

	struct ListNode l2d = { .val = 9, .next = NULL };
	struct ListNode l2c = { .val = 9, .next = &l2d };
	struct ListNode l2b = { .val = 9, .next = &l2c };
	struct ListNode l2 = { .val = 9, .next = &l2b };

	struct ListNode* i = &l1;

	result = reverseList(&l1);
}

int main() {
	printf("--------------------------------\n");
	printf("Two Sum:\n");
	twoSumTest();
	printf("--------------------------------\n");
	printf("Add Two Numbers:\n");
	addTwoNumbersTest();
	printf("--------------------------------\n");
	printf("Is Palindrome:\n");
	isPalindromeTest();
	printf("--------------------------------\n");
	printf("Reverse:\n");
	reverseTest();
	printf("--------------------------------\n");
	printf("Reverse bits:\n");
	reverseBitsTest();
	printf("--------------------------------\n");
	printf("Hamming Weight:\n");
	hammingWeightTest();
	printf("--------------------------------\n");
	printf("Atoi:\n");
	myAtoiTest();
	printf("--------------------------------\n");
	printf("Remove Duplicates:\n");
	myAtoiTest();
	printf("--------------------------------\n");
	printf("Divide:\n");
	myAtoiTest();
	printf("--------------------------------\n");
	printf("Reverse List:\n");
	reverseListTest();
	printf("--------------------------------\n");

	return 0;
}