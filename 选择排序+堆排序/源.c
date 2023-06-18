#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
// —°‘Ò≈≈–Ú
void swap(int* a, int* i, int* min)
{
	int tmp = 0;
	tmp = *i;
	*i = *min;
	*min = tmp;
}
void SelectSort(int* a, int n)
{
	int min ;
	for (int i = 0; i < n; i++)
	{
		min = i;
		for (int j = i+1 ; j < n; j++)
		{
			if (a[min] > a[j])
			{
				min = j;
			}
		}
		if (i != min)
			swap(a, &a[i], &a[min]);
	}
}

// ∂—≈≈–Ú
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
			swap(a,&a[child], &a[parent]);
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
		swap(a,&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}
void print(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	print(arr, sizeof(arr) / sizeof(int));
	SelectSort(arr, sizeof(arr) / sizeof(int));
	print(arr, sizeof(arr) / sizeof(int));
	HeapSort(arr, sizeof(arr) / sizeof(int));
	print(arr, sizeof(arr) / sizeof(int));

	return 0;
}