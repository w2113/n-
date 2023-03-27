#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0;
	int i = 0, j = 0, k = 0;
	for (i = 0; i < 9; i++)
	{
		a = i;
		for (j = 0; j < 9; j++)
		{
			b = j;
			for (k = 0; k < 9; k++)
			{
				c = k;
				if (((a * 100 + b * 10 + c) + (b * 100 + c * 10 + c)) == 532)
				{
					printf("%d %d %d", a, b, c);
				}
			}
		}
	}
	return 0;
}