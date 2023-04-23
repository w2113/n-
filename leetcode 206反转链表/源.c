#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head)
{

    if (head == NULL)
        return NULL;
    struct ListNode* tail = head, * prev = NULL, * next = tail->next;
    while (tail->next != NULL)
    {
        tail->next = prev;
        prev = tail;
        tail = next;
        next = next->next;

    }
    tail->next = prev;
    return tail;
}