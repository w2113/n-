#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//int num_of1(unsigned int s)//第一种
//{
//	int count = 0;
//	while (s)
//	{
//		if (s % 2 == 0)
//		{
//			count++;
//		}
//		s /= 2;
//	}
//	return count;
//}
//int num_of1(int n)//第二种
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
int num_of1(int n)//第三种
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = -1;
	int ret = num_of1(n);
	printf("%d\n", ret);
	return 0;
}