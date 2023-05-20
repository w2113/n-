#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int BinaryNumOf1(int num)
{
	int count = 0;
	int flag = 1;
	while (flag)
	{
		if (num & flag)
		{
			count++;
		}
		flag = flag << 1;
	}
	return count;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = BinaryNumOf1(num);
	printf("%d\n", ret);
	return 0;
}
