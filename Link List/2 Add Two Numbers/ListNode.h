#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>

// Definition for singly-linked list.
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

ListNode *addTwoNumbers(ListNode *l1, ListNode *l2);
void printList(ListNode *node);
ListNode *newNode(int data);

#endif
