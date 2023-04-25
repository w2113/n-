#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
#include <cstddef>
class Partition
{
public:
    ListNode* partition(ListNode* pHead, int x)
    {
        // write code here
        ListNode* cur = pHead;
        ListNode* less_head, * less_tail, * greater_head, * greater_tail;
        less_head = less_tail = (ListNode*)malloc(sizeof(ListNode));
        greater_head = greater_tail = (ListNode*)malloc(sizeof(ListNode));
        while (cur)
        {
            if (cur->val < x)
            {
                less_tail->next = cur;
                less_tail = less_tail->next;
            }
            else
            {
                greater_tail->next = cur;
                greater_tail = greater_tail->next;
            }
            cur = cur->next;
        }
        //链接两个链表
        less_tail->next = greater_head->next;
        //关键点 防止成环
        greater_tail->next = NULL;
        //给头节点
        pHead = less_head->next;
        //释放空间
        free(less_head);
        free(greater_head);
        return pHead;
    }
};