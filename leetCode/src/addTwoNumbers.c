#include "addTwoNumbers.h"

struct ListNode* addTwoNumbers( struct ListNode* l1, struct ListNode* l2 ){
	struct ListNode* l3 = NULL;
	struct ListNode* aux;
	struct ListNode* tail;
	unsigned char carry = 0;
	int sum;

	while( l1 || l2 || carry ){
		aux = (struct ListNode*)malloc( sizeof(struct ListNode) );

		sum = 0;

		if( l1 ){
			sum += l1->val;
			l1 = l1->next;
		}
		if( l2 ){
			sum += l2->val;
			l2 = l2->next;
		}
		sum += carry;
		carry = 0;

		if( sum > 9 ){
			carry = 1;
			sum -= 10;
		}

		aux->val  = sum;

		if( l3 == NULL ){
			aux->next = NULL;
			l3 = aux;
			tail = l3;
		}
		else{
			aux->next = NULL;
			tail->next = aux;
			tail = aux;
		}
	}

	return l3;
}

/**
 * Problem 2
 * Add Two Numbers
 */
struct ListNode* addTwoNumbers_leg(struct ListNode* l1, struct ListNode* l2) {
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
