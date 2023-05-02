#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int Gcd(int a, int b)    //求最大公约数
{
	if (b == 0)
		return a;
	int r = a % b;
	return Gcd(b, r);
}
int main()
{
	int n, a, b, fenz, fenm;
	scanf("%d", &n);
	scanf("%d/%d", &a, &b);    //先处理第一个数据
	fenz = a; fenm = b;
	for (int i = 1; i < n; i++)
	{
		scanf("%d/%d", &a, &b);
		fenz = fenz * b + a * fenm;    //分子
		fenm = fenm * b;               //分母
		int gcd = Gcd(fenz, fenm);
		fenz /= gcd;
		fenm /= gcd;
	}
	fenm = fenm * n;
	int gcd = Gcd(fenz, fenm);
	fenz /= gcd;
	fenm /= gcd;
	if (fenm != 1)
		printf("%d/%d", fenz, fenm);
	else
		printf("%d", fenz);

	return 0;
}
