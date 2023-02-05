#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//写一个函数，求两个整数之和，
//要求在函数体内不得使用+、-、*、/四则运算符号。
#include<stdio.h>
int Add(int num1, int num2)
{
	// write code here
	int m = 0, n = 0;
	m = (num1 & num2) << 1;//进位
	n = num1 ^ num2;
	while (n & m)//检查是否还要进位
	{
		num1 = m;
		num2 = n;
		m = (num1 & num2) << 1;
		n = num1 ^ num2;
	}
	return m|n;
}
int main()
{
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	printf("%d", Add(x, y));
	return 0;
}