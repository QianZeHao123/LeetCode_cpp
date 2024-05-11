#include "ListNode.h"

int main()
{
    // Test example 1: 342 + 465 = 807
    ListNode *l1 = newNode(2);
    l1->next = newNode(4);
    l1->next->next = newNode(3);

    ListNode *l2 = newNode(5);
    l2->next = newNode(6);
    l2->next->next = newNode(4);

    ListNode *result = addTwoNumbers(l1, l2);
    printList(result);

    // Test example 2: 0 + 0 = 0
    ListNode *l3 = newNode(0);
    ListNode *l4 = newNode(0);

    ListNode *result2 = addTwoNumbers(l3, l4);
    printList(result2);

    return 0;
}
