#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int main()
{
	int a[10][10] = { 0 }, i, j, k;
	for (i = 0; i < 10; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < 10; i++)
		for (j = 1; j < i; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	for (i = 0; i < 10; i++)
	{
		for (k = 0; k <= 10 - i; k++)
			printf("   ");
		for (j = 0; j <= i; j++)
			printf("%6d", a[i][j]);
		printf("\n");
	}
	return 0;
}
