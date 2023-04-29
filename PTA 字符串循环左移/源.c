#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char a[101];//字符串长度不超过100 
	int i, N, j, m, k;
	char temp;//中间变量 
	gets(a);//输入函数 
	scanf("%d", &N);//N表示左移的次数 
	m = strlen(a);
	for (k = 1; k <= N; k++)
	{

		for (j = 0; j < m - 1; j++)//m-1去掉最后的换行符
		{
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
		}
	}
	for (i = 0; i < m; i++)
	{
		printf("%c", a[i]);
	}
}
