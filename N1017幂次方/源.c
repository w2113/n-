#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//������������X��N���ÿո����������X, N <= 10 ^ 9��
//���X ^ N��233333ȡģ�Ľ��
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