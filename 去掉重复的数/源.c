#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int ds(int* arr, int sz)
{
	if (sz == 0)
		return 0;
	int dst = 0;
	int j = 1;
	while (j < sz)
	{
		if (arr[dst] == arr[j])
		{
			++j;
		}
		else
		{
			++dst;
			arr[dst] = arr[j];
			++j;
		}
	}
	return dst;
}
int main()
{
	int arr[] = { 0,0,1,1,2,3,3,5,6,8,8,8 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int d=ds(arr,sz);
	int i = 0;
	for (i = 0; i < d+1; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}