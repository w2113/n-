
#include"Heap.h"
void swap(int* p1, int* p2)
{
	int x = *p1;
	*p1 = *p2;
	*p2 = x;
}
void AdjustDown(HPDataType* a, int n, int parent)
{
	int child = parent * 2 + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}
		if (a[child] > a[parent])
		{
			swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void AdjustUp(HPDataType* a, int child)
{
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[child] > a[parent])
		{
			swap(&a[child], &a[parent]);
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			break;
		}
	}
}
void HeapCreate(Heap* hp, HPDataType* a, int n)
{
	hp->_a = (HPDataType*)malloc(sizeof(HPDataType) * n);
	assert(hp->_a);
	memcpy(hp->_a, a, sizeof(HPDataType) * n);
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(hp->_a, n, i);
	}
	hp->_capacity = hp->_size = n;
}
void HeapPush(Heap* hp, HPDataType x)
{
	assert(hp);
	if (hp->_size == hp->_capacity)
	{
		int newcapacity = hp->_capacity * 2;
		hp->_a = (HPDataType*)realloc(hp->_a, sizeof(HPDataType) * newcapacity);
		hp->_capacity = newcapacity;
	}
	hp->_a[hp->_size++] = x;
	AdjustUp(hp->_a, hp->_size - 1);
}
void HeapPop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));
	swap(&hp->_a[0], &hp->_a[hp->_size - 1]);
	hp->_size--;
	AdjustDown(hp->_a, hp->_size, 0);
}
HPDataType HeapTop(Heap* hp)
{
	assert(hp);
	assert(!HeapEmpty(hp));
	return hp->_a[0];
}
int HeapSize(Heap* hp)
{
	assert(hp);
	return hp->_size;
}
int HeapEmpty(Heap* hp)
{
	return hp->_size == 0;
}
void HeapDestory(Heap* hp)
{
	free(hp);
	hp->_a = NULL;
	hp->_capacity = hp->_size = 0;
}
