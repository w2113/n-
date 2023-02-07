#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	double sum = 0.0;
	int flag = 1;
	int i = 0;
	for (i = 1; i <= 100; i++)
	{
		sum += (flag) * 1.0 / i;
		flag = -flag;//控制正负；
	}
	printf("%lf\n", sum);
	return 0;
}
//计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，
//打印出结果