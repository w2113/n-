#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
int cmp(const void* a, const void* b)
{
	return *(int*)b - *(int*)a;
}
void swap(char* s1, char* s2, int count)
{
	for (int i = 0; i < count; i++)
	{
		char tmp = *s1;
		*s1 = *s2;
		*s2 = tmp;
		s1++;
		s2++;
	}
}
void my_qsort(void* ptr, size_t count, size_t size, int(*cmp)(const void* a, const void* b))
{
	int i = 0;
	for (i = 0; i < count - 1; i++)
	{
		int j = 0;
		for (j = 0; j < count - 1 - i; j++)
		{
			if (cmp((char*)ptr + j * size, (char*)ptr + (j + 1) * size) > 0)
			{
				swap((char*)ptr + j * size, (char*)ptr + (j + 1) * size, size);
			}
		}
	}
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int count = sizeof(a)/sizeof(a[0]);
	my_qsort(a, count, sizeof(int), cmp);
	for (int i = 0; i < count; i++)
	{
		printf("%d", a[i]);
	}
	return 0;
}