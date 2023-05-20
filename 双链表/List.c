#include"List.h"
ListNode* ListCreate()
{
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	assert(head);
	head->_next = head;
	head->_prev = head;
	return head;
}
ListNode* BuyListNode(int x)
{
	ListNode* new = (ListNode*)malloc(sizeof(ListNode));
	assert(new);
	new->_data = x;
	new->_next = NULL;
	new->_prev = NULL;
	return new;
}
void ListPrint(ListNode* pHead)
{
	assert(pHead);
	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		printf("%d<->", cur->_data);
		cur = cur->_next;
	}
	printf("NULL\n");
}
void ListPushBack(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	/*ListNode* tail = pHead->_prev;
	ListNode* new = BuyListNode(x);
	assert(new);
	tail->_next = new;
	new->_prev = tail;
	new->_next = pHead;
	pHead->_prev = new;*/
	ListInsert(pHead, x);
}
void ListPopBack(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->_next != pHead);
	/*ListNode* tail = pHead->_prev;
	assert(tail);
	tail->_prev->_next = pHead;
	pHead->_prev = tail->_prev;
	free(tail);*/
	ListErase(pHead->_prev);
}
void ListPushFront(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	/*ListNode* new = BuyListNode(x);
	assert(new);
	pHead->_next->_prev = new;
	new->_next = pHead->_next;
	new->_prev = pHead;
	pHead->_next = new;*/
	ListInsert(pHead->_next, x);

}
void ListPopFront(ListNode* pHead)
{
	assert(pHead);
	assert(pHead->_next != pHead);
	/*ListNode* delhead = pHead->_next;
	assert(delhead);
	delhead->_next->_prev = pHead;
	pHead->_next = delhead->_next;
	free(delhead);*/
	ListErase(pHead->_next);
}
ListNode* ListFind(ListNode* pHead, LTDataType x)
{
	assert(pHead);
	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		if (cur->_data == x)
		{
			return cur;
		}
		cur = cur->_next;
	}
	return NULL;
}
void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* prev = pos->_prev;
	ListNode* new = BuyListNode(x);
	prev->_next = new;
	new->_prev = prev;
	new->_next = pos;
	pos->_prev = new;
}
void ListErase(ListNode* pos)
{
	assert(pos);
	ListNode* pos_prev = pos->_prev;
	ListNode* pos_next = pos->_next;
	pos_prev->_next = pos_next;
	pos_next->_prev = pos_prev;
	free(pos);
	pos = NULL;
}
void ListDestory(ListNode* pHead)
{
	assert(pHead);
	ListNode* cur = pHead->_next;
	while (cur != pHead)
	{
		ListNode* next = cur->_next;
		free(cur);
		cur = next;
	}
	free(pHead);
	pHead = NULL;
}