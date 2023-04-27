#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
#include <cstddef>
struct ListNode* MidNode(struct ListNode* head)
{
    struct ListNode* fast = head, * slow = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    if (fast->next != NULL)
    {
        slow = slow->next;
    }
    return slow;
}
struct ListNode* RverseMid(struct ListNode* head)
{
    struct ListNode* prev = NULL, * tail = head, * next = tail->next;
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
#include <cstdlib>
class PalindromeList {
public:
    bool chkPalindrome(ListNode* A) {
        // write code here
        ListNode* mid = MidNode(A);
        ListNode* rmid = RverseMid(mid);
        while (rmid)
        {
            if (A->val != rmid->val)
            {
                return false;
            }
            else
            {
                rmid = rmid->next;
                A = A->next;
            }
        }
        return true;
    }
};