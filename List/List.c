#include"List.h"
LTNode* ListInit()
{
	LTNode* head = (LTNode*)malloc(sizeof(LTNode));
	assert(head);
	head->next = head;
	head->prev = head;
	return head;
}
LTNode* BuyListNode(int x)
{
	LTNode* newnode = (LTNode*)malloc(sizeof(LTNode));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}
void ListPrint(LTNode* head)
{
	assert(head);
	LTNode* cur = head->next;
	while (cur != head)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void ListPushBack(LTNode* head, int x)
{
	assert(head);//使用insert
	/*LTNode* tail = head->prev;
	LTNode* newnode = BuyListNode(x);
	assert(newnode);
	tail->next = newnode;
	newnode->prev = tail;
	newnode->next = head;
	head->prev = newnode;*/
	ListInsert(head,x);
}
void ListPopBack(LTNode* head)
{
	assert(head);//使用ListErase
	assert(head->next != head);
	/*LTNode* tail = head->prev;
	assert(tail);
	tail->prev->next = head;
	head->prev = tail->prev;
	free(tail);*/
	ListErase(head->prev);
}
void ListPushFront(LTNode* head, int x)
{
	assert(head);//使用insert
	/*LTNode* newnode = BuyListNode(x);
	assert(newnode);
	head->next->prev = newnode;
	newnode->next = head->next;
	newnode->prev = head;
	head->next = newnode;*/
	ListInsert(head->next, x);
}
void ListPopFront(LTNode* head)
{
	assert(head);//使用ListErase
	assert(head->next!=head);
	/*LTNode* delhead = head->next;
	assert(delhead);
	delhead->next->prev = head;
	head->next = delhead->next;
	free(delhead);*/
	ListErase(head->next);
}
LTNode* ListFind(LTNode* head, int x)
{
	assert(head);
	LTNode* cur = head->next;
	while (cur != head)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
void ListInsert(LTNode* pos, int x)//pos之前插入
{//头插尾插复用
	assert(pos);
	LTNode* prev = pos->prev;
	LTNode* newnode = BuyListNode(x);
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}
void ListErase(LTNode* pos)//删除
{//头删尾删复用
	assert(pos);
	LTNode* PosPrev = pos->prev;
	LTNode* PosNext = pos->next;
	PosPrev->next =PosNext;
	PosNext->prev = PosPrev;
	free(pos);
	pos = NULL;
}
void ListDestroy(LTNode* head)//销毁
{
	assert(head);
	LTNode* cur = head->next;
	while (cur != head)
	{
		LTNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(head);
	head = NULL;
}