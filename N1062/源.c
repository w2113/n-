#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int x = 0;
	while (scanf("%d", &x) != EOF)
	{
		if (x == 0)
		{
			break;
		}
		int arr[20][20] = { 0 };
		int i = 0;
		int j = 0;
		for (i = 0; i < x; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j == 0)
				{
					arr[i][j] = 1;
				}
				if (j == i)
				{
					arr[i][j] = 1;
				}
				if (i >= 2 && j >= 1)
				{
					arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				}
			}
		}
		for (i = 0; i < x; i++)
		{
			for (j = 0; j <= i; j++)
			{
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}