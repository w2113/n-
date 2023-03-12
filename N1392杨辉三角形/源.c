#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int main()
{
	int a[10][10] = { 0 }, i, j;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i < n; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < n; i++)
		for (j = 1; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	for (i = 1; i < n; i++)
	{
		for (j = 0; j <= i; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}
