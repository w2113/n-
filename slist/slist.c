#include"slist.h"
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* new = (SListNode*)malloc(sizeof(SListNode));
	assert(new);
	new->data = x;
	new->next = NULL;
	return new;
}
void SListPrint(SListNode* plist)
{
	
	SListNode* cur = plist;
	while (cur)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	
	SListNode* p = BuySListNode(x);
	assert(p);
	p->next = *pplist;
	*pplist = p;
}
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	
	assert(*pplist);
	SListNode* p = BuySListNode(x);
	if (*pplist == NULL)
	{
		*pplist = p;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = p;
	}
}
void SListPopFront(SListNode** pplist)
{
	
	assert(*pplist);
	SListNode* front = (*pplist)->next;
	free(*pplist);
	*pplist = front;
}
void SListPopBack(SListNode** pplist)
{
	assert(pplist);
	if ((*pplist)->next==NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	assert(plist);
	SListNode* cur = plist;
	while (cur)
	{
		if (cur->data == x)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}
void SListInsertAfter(SListNode* pos, SLTDateType x)
{
	assert(pos);
	SListNode* newnode = BuySListNode(x);
	assert(newnode);
	newnode->next = pos->next;
	pos->next = newnode;
}
void SListEraseAfter(SListNode* pos)
{
	assert(pos);
	assert(pos->next);
	SListNode* next = pos->next;
	pos->next = next->next;
	free(next);
}
void SListDestroy(SListNode** phead)
{
	assert(phead);
	SListNode* dis = *phead;
	while (dis)
	{
		SListNode* next = dis->next;
		free(dis);
		dis = next;
	}
	*phead = NULL;
}