#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int common_divisor(int m,int n)
{
	int x = 0;
	if (m < n)
	{
		x = m;
		m = n;
		n = x;
	}
	while (n != 0)
	{
		x = n;
		n = m % n;
		m = x;
	}
	return x;
}
int common_multiple(int m, int n)
{
	int x = m > n ? m : n;
	while (1)
	{
		if (x % m == 0 && x % n == 0)
		{
			break;
		}
		x++;
	}
	return x;
}
int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	printf("%d ",common_divisor(m, n));//最大公约数
	printf("%d", common_multiple(m, n));//最小公倍数
	return 0;
}