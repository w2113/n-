#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
int y = 0, y1 = 0;
int m = 0, m1 = 0;
int d = 0, d1 = 0;
int ds(int y,int m,int d)
{
	int add = 0;
	int i = 0;
	for (int i = 0; i < y; i++)
	{
		if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))
		{
			add += 366;//ÈòÄê 
		}
		else
		{
			add += 365;
		}
	}
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
	{
		for (i = 0; i < m; i++)
		{
			add = add + days[i];
		}
		add = add + d+1;
	}
	else
	{
		for (i = 0; i < m; i++)
		{
			add = add + days[i];
		}
		add = add + d;
	}
	return add;
}
int main()
{
	int sub = 0;
	int sub1 = 0;
	while (scanf("%4d%2d%2d", &y, &m, &d)&& scanf("%4d%2d%2d", &y1, &m1, &d1) != EOF)
	{
		sub = ds(y, m, d);
		sub1 = ds(y1, m1, d1);
		if (sub1 > sub)
			printf("%d\n", sub1 - sub + 1);
		else
			printf("%d\n", sub - sub1 + 1);
	}
	return 0;
}