#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int n = 0, i = 0;
	while (scanf("%d", &n) != EOF)
	{
		int num = 0;
		for (i = 2; i * i <= n; i++)
		{
			while (n % i == 0)
			{
				num++;
				n /= i;
			}
		}
		if (n > 1)
			num++;
		printf("%d\n", num);
	}
	return 0;
}