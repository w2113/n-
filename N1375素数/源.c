#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int isprime(int n)//判断是否为素数
{
	if (n == 1)
	{
		return 0;
	}
	int i = 0;
	for (i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n = 0;
	int i = 0;
	int count = 0;
	while (scanf("%d", &n)!=EOF)
	{
		count = 0;//count重置
		for (i = 1; i <= n; i += 10)//每次+10生成个位为1的数字
		{
			if (isprime(i))//是素数打印
			{
				count++;//记录素数
				if (count>1)
				{
					printf(" ");
				}
				printf("%d", i);
			}
		}
		if (count == 0)
		{
			printf("-1");
		}
	}
	return 0;
}