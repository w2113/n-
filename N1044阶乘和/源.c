#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
long long  fun(int n)
{
	if (n == 1)
		return n;
	else
		return fun(n - 1) * n;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	long long  sum = 0;
	while (n)
	{
		sum += fun(n);
		n--;
	}
	printf("%lld", sum);
	return 0;
}