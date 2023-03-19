#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	float a = 0, b = 0, c = 0, add = 0, i = 0;
	scanf("%f %f %f", &a, &b, &c);
	for (i = 1; i <= a; i++)
	{
		add += i;
	}
	for (i = 1; i <= b; i++)
	{
		add += i * i;
	}
	for (i = 1; i <= c; i++)
	{
		add += 1.0 / i;
	}
	printf("%.2f", add);
	return 0;
}