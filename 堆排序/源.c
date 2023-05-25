#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
void swap(int* p1, int* p2)
{
	int x = *p1;
	*p1 = *p2;
	*p2 = x;
}
void AdjustDown(int* a, int n, int parent)
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
	return 0;
}