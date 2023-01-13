#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int fun(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
int main()
{
	int m = 0;
	scanf("%d", &m);
	while (m--)
	{
		int n = 0;
		scanf("%d", &n);
		printf("%d", fun(n));
	}
	return 0;
}