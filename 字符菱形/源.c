#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//��ӡ����
int main() {
	int n = 0;	//�ϰ벿������
	scanf("%d", &n);
	//�ϰ벿�֣�
	int i = 0, j = 0;
	for (i = 1; i <= n; i++)
	{	//������ѭ������
		//1����ӡ�ո�
		for (j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		//2����ӡ*��
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		//3����ӡ��һ�Ż���
		printf("\n");
	}
	//�°벿�֣�
	for (i = 1; i <= n - 1; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (n - 1 - i) + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}