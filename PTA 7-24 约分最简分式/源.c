#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int common_divisor(int m, int n)
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
int main()
{
	int m = 0, n = 0, max = 0;
	scanf("%d/%d", &m, &n);
	max = common_divisor(m, n);
	printf("%d/%d", m / max, n / max);
	return 0;
}