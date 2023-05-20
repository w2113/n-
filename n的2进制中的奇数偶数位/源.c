#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	for (i=31; i >= 1; i -= 2)//Ææ
	{
		printf("%d  ", ((n >> i) & 1));
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)//Å¼
	{
		printf("%d  ", ((n >> i) & 1));
	}
	return 0;
}