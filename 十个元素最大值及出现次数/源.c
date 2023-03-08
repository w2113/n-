#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int a[] = { 1,5,53,5,6,8,4,2,5,6,3,8,3,4 };
	int map[sizeof(a)] = {0};
	int i = 0, max = 0, j = 0;
	for (i = 0; i < sizeof(a); i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			map[i]++;
			j = i;
		}
	}
	printf("%d %d", max, map[j]);
	return 0;
}