#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 9; i <= 100; i++)
	{
		if (i % 10 == 9)//个位为9
		{
			count++;
		}
		if (i / 10 == 9)//十位为9
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}