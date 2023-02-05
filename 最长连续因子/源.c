#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int n = 0;
	int start = 0;
	int i = 0;
	int num = 0, sum = 0;//记录连续因子长度；
	scanf("%d", &n);
	for (i = 2; i * i <= n; ++i)
	{
		if (n % i != 0)//如果不是因子跳过;
		{
			continue;
		}
		else
		{
			sum = 0;//重置长度
			int temp = n;//temp记录n
			int j = i;//求连续因子
			while (temp % j == 0)
			{
				temp /= j;
				sum++;
				j++;
			}
			if (num < sum)
			{
				start = i;//最大值
				num = sum;//最大长度
			}
		}
	}
	if (num == 0)//num为0，n为素数
	{
		printf("%d\n", n);
	}
	else
	{
		//printf("%d ", num);
		for (i = 0; i < num; ++i)
		{
			if (i == num - 1)
				printf("%d", start + i);
			else
				printf("%d ", start + i);
		}
	}
	return 0;
}