#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 0; i < 100000; i++)
	{
		int tmp = i;
		int n = 1;
		while (tmp / 10)
		{
			n++;
			tmp = tmp / 10;
		}
		tmp = i;
		int sum = 0;
		while (tmp)
		{
			sum += pow(tmp % 10, n);
			tmp = tmp / 10;
		}
		if (sum == i)
		{
			printf("%d\n ", i);
		}
	}
	return 0;
}