#include"list.h"
void SListprint(n* phead)//��ӡ
{
	n* cur = phead;
	while (cur != NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}
n* new(STLDate x)
{
	n* newnode = (n*)malloc(sizeof(n));
	assert(newnode);
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SListpushBack(n** phead, STLDate x)//β��
{
	assert(phead);
	n* newnode = new(x);
	if (*phead == NULL)
	{
		*phead = newnode;
	}
	else
	{
		n* tail = *phead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SListPushFront(n** phead, STLDate x)//ͷ��
{
	n* newnode = new(x);
	newnode->next = *phead;
	*phead = newnode;
}
void SListPopBack(n** phead)//βɾ
{
	assert(phead);
	if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}
	else
	{
		n* tail = *phead;
		while (tail->next->next)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = NULL;
	}
}
void SListPopFront(n** phead)//the_first_delete
{
	assert(*phead);
	n* front = (*phead)->next;
	free(*phead);
	*phead = front;
}
n* SListFind(n* phead, STLDate x)//search
{
	assert(phead);
	n* cur = phead;
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
void SListInsert(n** phead, n* pos, STLDate x)//��ǰһ��λ�ò���
{
	assert(phead);
	assert(pos);
	n* newnode = new(x);
	if (*phead == pos)
	{
		newnode->next = *phead;
		*phead = newnode;
	}
	else
	{
		n* posPrev = *phead;
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}
		posPrev->next = newnode;
		newnode->next = pos;
	}
}
void SListInsertAfter(n* pos, STLDate x)
{
	assert(pos);
	n* newnode = new(x);
	newnode->next = pos->next;
	pos->next = newnode;
}
void SListErase(n** phead, n*pos)//ɾ����ʱλ��
{
	assert(phead);
	assert(pos);
	if (*phead == pos)
	{
		*phead = pos->next;
		free(pos);
	}
	else
	{
		n* Prev = *phead;
		while (Prev->next != pos)
		{
			Prev = Prev->next;
		}
		Prev->next = pos->next;
		free(pos);
	}
}
void SListEraseAfter(n* pos)
{
	assert(pos);
	assert(pos->next);
	n* next = pos->next;
	pos->next = next->next;
	free(next);
}
void SListDestory(n** phead)
{
	assert(phead);
	n* dis = *phead;
	while (dis)
	{
		n*next = dis->next;
		free(dis);
		dis = next;
	}
	*phead = NULL;
}