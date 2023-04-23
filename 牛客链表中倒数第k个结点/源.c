#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

 /**
  *
  * @param pListHead ListNode类
  * @param k int整型
  * @return ListNode类
  */
struct ListNode* FindKthToTail(struct ListNode* pListHead, int k)
{
    if (pListHead == NULL)
        return NULL;
    struct ListNode* fast = pListHead, * slow = pListHead;
    while (k--)
    {
        if (fast == NULL)
        {
            return NULL;
        }
        fast = fast->next;
    }
    while (fast != NULL)
    {
        fast = fast->next;
        slow = slow->next;
    }
    return slow;
    // write code here
}