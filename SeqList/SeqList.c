#include"SeqList.h"
void SeqListInit(SeqList* ps)
{
	assert(ps);
	ps->a = (SLDateType*)malloc(sizeof(SLDateType) * 4);
	assert(ps->a);
	ps->capacity = 4;
	ps->size = 0;
}
void CheckCapacity(SeqList* ps)
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		SLDateType* tmp = (SLDateType*)realloc(ps->a, sizeof(SLDateType) * ps->capacity * 2);
		assert(tmp);
		ps->a = tmp;
		ps->capacity *= 2;
	}
}
void SeqListPushBack(SeqList* ps, SLDateType x)
{
	assert(ps);
	CheckCapacity(ps);
	ps->a[ps->size++] = x;
}
void SeqListPushFront(SeqList* ps, SLDateType x)
{
	assert(ps);
	CheckCapacity(ps);
	int end = ps->size - 1;
	for (int i = end; i >= 0; i--)
	{
		ps->a[i + 1] = ps->a[i];
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SeqList* ps)
{
	/*assert(ps->size>0);
	int start = 1;
	for (start = 1; start < ps->size; start++)
	{
		ps->a[start - 1] = ps->a[start];
	}
	ps->size--;*/
	SeqListErase(ps, 0);
}
void SeqListPopBack(SeqList* ps)
{
	/*assert(ps->size>0);
	ps->size--;*/
	SeqListErase(ps, ps->size - 1);
}
int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->a[i] == x)
		{
			return i;
		}
	}
}
void SeqListInsert(SeqList* ps, int pos, SLDateType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);
	CheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos] = x;
	ps->size++;
}
void SeqListErase(SeqList* ps, int pos)
{
	assert(pos >= 0 && pos <= ps->size);
	int start = pos ;
	while (start < ps->size)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}
void SeqListPrint(SeqList* ps)
{
	assert(ps->a);
	for (int i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListDestroy(SeqList* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->capacity = 0;
	ps->size = 0;
}