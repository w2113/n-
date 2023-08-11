#include"标头.h"
void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void print(int* a,int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
// 冒泡排序
void BubbleSort(int* a, int n)
{
	int end = n;
	while (end)
	{
		int flag = 0;
		for (int i = 1; i < end; i++)
		{
			if (a[i - 1] < a[i])
			{
				int tmp = a[i];
				a[i] = a[i - 1];
				a[i - 1] = tmp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
		end--;
	}
}

// 快速排序递归实现
// 快速排序hoare版本
int PartSort1(int* a, int left, int right)
{
	int key = left;
	while (left < right)
	{
		while (left < right && a[right] >= a[key])
		{
			right--;
		}
		while (left < right && a[left] <= a[key])
		{
			left++;
		}
		
		swap(&a[left], &a[right]);
	}
	swap(&a[key], &a[left]);
	return left;
}
// 快速排序挖坑法
int PartSort2(int* a, int left, int right)
{
	int pit = left;
	int key = a[left];
	while (left < right)
	{
		while (left < right && a[right] >= key)
		{
			a[pit] = a[right];
			right--;
		}
		a[pit] = a[right];
		pit = right;
		while (left < right && a[left] <= key)
		{
			a[pit] = a[left];
			left++;
		}
		a[pit] = a[left];
		pit = left;
	}
	a[pit] = key;
	return pit;
}
// 快速排序前后指针法
int PartSort3(int* a, int left, int right)
{
	int keyi = left;
	int cur = left + 1;
	int prev = left;
	while (cur <= right)
	{
		if (a[cur] < a[keyi] && ++prev != cur)
		{
			swap(&a[cur], &a[prev]);
		}
		cur++;
	}
	swap(&a[keyi], &a[prev]);
	keyi = prev;
	return prev;
}
void QuickSort(int* a, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	//int key = PartSort1(a, left, right);
	//int key = PartSort2(a, left, right);
	int key = PartSort3(a, left, right);
	QuickSort(a, left, key - 1);
	QuickSort(a, key + 1, right);
}

// 快速排序 非递归实现
void QuickSortNonR(int* a, int left, int right)
{
	Stack s;
	StackInit(&s);
	StackPush(&s, left);
	StackPush(&s, right);
	while (!StackEmpty(&s))
	{
		int end = StackTop(&s);
		StackPop(&s);
		int begin = StackTop(&s);
		StackPop(&s);
		int keyi = PartSort3(a, begin, end);
		if (keyi + 1 < end)
		{
			StackPush(&s, keyi + 1);
			StackPush(&s, end);
		}
		if (keyi > begin)
		{
			StackPush(&s, begin);
			StackPush(&s, keyi - 1);
		}
	}
	StackDestroy(&s);
}
int main()
{
	int a[] = { 3,5,6,4,8,2,3,0,7 };
	//BubbleSort(a, sizeof(a) / sizeof(int));
	//QuickSort(a, 0, sizeof(a) / sizeof(int) - 1);
	QuickSortNonR(a, 0, sizeof(a) / sizeof(int) - 1);
	print(a, sizeof(a) / sizeof(int));
	return 0;
}
