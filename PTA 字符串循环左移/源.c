#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char a[101];//�ַ������Ȳ�����100 
	int i, N, j, m, k;
	char temp;//�м���� 
	gets(a);//���뺯�� 
	scanf("%d", &N);//N��ʾ���ƵĴ��� 
	m = strlen(a);
	for (k = 1; k <= N; k++)
	{

		for (j = 0; j < m - 1; j++)//m-1ȥ�����Ļ��з�
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
