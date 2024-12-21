#include "reverseList.h"

/**
 * Problem 206
 * Reverse Linked List
 */
struct ListNode* reverseList(struct ListNode* head) {
	struct ListNode* prev = head;
	struct ListNode* i = head->next;

	while (i) {
		printf("prev=%d current=%d next=%d\n", prev->val, i->val, i->next->val);
		prev = prev->next;
		i = i->next;
	}
	
}