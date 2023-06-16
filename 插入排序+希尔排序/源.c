#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
// ≤Â»Î≈≈–Ú
void InsertSort(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		int end = i - 1, tmp = a[i];
		while (end >= 0)
		{
			if (a[end] < tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

// œ£∂˚≈≈–Ú
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i, tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] < tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
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
	int a1[] = { 1,2,3,4,5,6,7,8 };
	int a2[] = { 1,2,3,4,5,6,7,8 };
	InsertSort(a1, sizeof(a1) / sizeof(int));
	print(a1, sizeof(a1) / sizeof(int));
	ShellSort(a2, sizeof(a2) / sizeof(int));
	print(a2, sizeof(a2) / sizeof(int));
	return 0;
}