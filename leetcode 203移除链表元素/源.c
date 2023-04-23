#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */



struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode* cur = head;
    struct ListNode* prev = NULL;
    while (cur)
    {
        if (cur->val == val)
        {
            if (prev != NULL)
            {
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }
            else
            {
                cur = head->next;
                free(head);
                head = cur;
            }
        }
        else
        {

            prev = cur;
            cur = cur->next;
        }
    }
    if (head);
    return head;
    return NULL;
}