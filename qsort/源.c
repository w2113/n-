#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void swap(char*buf1,char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void b_sort(void* base,int sz,int width,int(*cmp)(const void *e1,const void *e2) )
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width )> 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}
int main()
{
	int arr[] = { 4,5,8,3,3,5,8,5,2 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//qsort(arr,sz,sizeof(int),cmp);
	b_sort(arr, sz, sizeof(arr[0]), cmp);
	print(arr, sz);
	return 0;
}