//Top-K问题
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
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
		if (child + 1 < n && a[child + 1] < a[child])
		{
			child++;
		}
		if (a[child] < a[parent])
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
void CreateNDate()
{
	// 造数据
	int n = 10000;
	srand(time(0));
	const char* file = "data.txt";
	FILE* fin = fopen(file, "w");
	if (fin == NULL)
	{
		perror("fopen error");
		return;
	}
	for (size_t i = 0; i < n; ++i)
	{
		int x = rand() % 1000000;
		fprintf(fin, "%d\n", x);
	}

	fclose(fin);
}
//Top-K问题
void PrintTopK(int k)
{
	//找topk
	const char* file = "data.txt";
	FILE* fout = fopen(file, "r");
	if (fout == NULL)
	{
		perror("fopen fail");
		return;
	}
	//开辟k个大小的数组
	int* minHeap = (int*)malloc(sizeof(int) * k);
	if (minHeap == NULL)
	{
		perror("malloc fail");
		return;
	}
	//将文件中的前k个数据读到数组中
	for (int i = 0; i < k; i++)
	{
		fscanf(fout,"%d", &minHeap[i]);
	}
	//建一个k个大小的小堆
	for (int i = (k - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(minHeap, k, i);
	}
	int val = 0;
	while (!feof(fout))
	{
		fscanf(fout, "%d", &val);
		if (val > minHeap[0])
		{
			minHeap[0] = val;
			AdjustDown(minHeap, k, 0);
		}
	}
	int end = k - 1;
	while (end > 0)
	{
		swap(&minHeap[0], &minHeap[end]);
		AdjustDown(minHeap, end, 0);
		end--;
	}
	for (int i = 0; i < k; i++)
	{
		printf("%d ", minHeap[i]);
	}
	printf("\n");

	fclose(fout);
}
int main()
{
	//CreateNDate();
	PrintTopK(100);
	return 0;
}