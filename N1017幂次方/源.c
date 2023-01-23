#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//输入两个整数X和N，用空格隔开，其中X, N <= 10 ^ 9。
//输出X ^ N对233333取模的结果
#include<stdio.h>
int main()
{
	long long int x, n, z = 1;
	scanf("%lld %lld", &x, &n);
	x %= 233333;
	while (n > 0)
	{
		if (n % 2 == 1)
		{
			z = (z * x) % 233333;
		}
		n /= 2;
		x *= x;
		x %= 233333;
	}
	printf("%lld", z);
	return 0;
}