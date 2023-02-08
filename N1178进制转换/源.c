#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int t = 1;
//	int j = 0;
//	int mark = 0;
//	int arr[32] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		int flag = 1;
//		int i = 0;
//		for (i = 0; flag; i++)
//		{
//			if (n & flag)
//			{
//				arr[i] = 1;
//			}
//			else
//			{
//				arr[i] = 0;
//			}
//			flag = flag << 1;
//		}
//		for (i = 31; i >= 0; i--)
//		{
//			printf("%d", arr[i]);
//		}
//	}
//	return 0;
//}
#include<string.h>
int main()
{
	int n=0, length=0;	//length用来装二进制数的个数
	int a[20];		//定义一个数组来装余2得到的余数
	while (scanf("%d", &n) != EOF)//输入十进制的数字
	{
		while (n / 2)
		{		//当n=1时，n/2=0，此时while(0)不执行while中的语句，直接执行下面的语句
			a[length++] = n % 2;	//将除2得到的余数装入数组中
			n = n / 2;			//除二
		}
		a[length++] = n % 2;		//存储最后一个余数
		for (int i = length - 1; i >= 0; i--)
		{
			printf("%d", a[i]);//将余数从下往上输出
		}
		length = 0;//置空个数
		memset(a, NULL, sizeof(a));//置空数组
	}
	return 0;
}
