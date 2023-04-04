#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int n = 0;
	char arr[14] = { 0 };
	scanf("%d", &n);
	int i = 0;
	int k = 0;
	while (n)
	{
		if (k != 0 && k % 3 == 0)//每三个数加一个逗号
		{
			arr[i++] = ',';
		}
		arr[i++] = n % 10+'0';//模十除十取下每一位放入arr数组+‘0’转字符；
		n /= 10;
		k++;//计数
	}
	for (--i; i >= 0; i--)//从后向前打印
	{
		printf("%c", arr[i]);
	}
	return 0;
}