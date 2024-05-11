#include "ListNode.h"

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    ListNode *dummyHead = new ListNode(0);
    ListNode *p = l1, *q = l2, *curr = dummyHead;
    int carry = 0;

    while (p != nullptr || q != nullptr)
    {
        int x = (p != nullptr) ? p->val : 0;
        int y = (q != nullptr) ? q->val : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        curr->next = new ListNode(sum % 10);
        curr = curr->next;
        if (p != nullptr)
            p = p->next;
        if (q != nullptr)
            q = q->next;
    }

    if (carry > 0)
    {
        curr->next = new ListNode(carry);
    }

    return dummyHead->next;
}

void printList(ListNode *node)
{
    while (node != nullptr)
    {
        std::cout << node->val << "->";
        node = node->next;
    }
    std::cout << "null" << std::endl;
}

ListNode *newNode(int data)
{
    ListNode *new_node = new ListNode(data);
    new_node->next = nullptr;
    return new_node;
}
