#ifndef ADD_TWO_NUMS_H
#define ADD_TWO_NUMS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "general.h"

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2);
struct ListNode* addTwoNumbers_leg(struct ListNode* l1, struct ListNode* l2);

#ifdef __cplusplus
}
#endif

#endif