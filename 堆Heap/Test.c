#include"Heap.h"
void HeapSort(int* a, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}
int main()
{
	int a[] = { 175,30,225,656,85,100 };
	int sz = sizeof(a) / sizeof(int);
	HeapSort(a, sz);
	/*Heap p;
	HeapCreate(&p, a, sz);
	HeapPush(&p, 105);
	HeapPush(&p, 5);
	HeapPop(&p);*/
	return 0;
}