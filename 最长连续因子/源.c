#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int n = 0;
	int start = 0;
	int i = 0;
	int num = 0, sum = 0;//��¼�������ӳ��ȣ�
	scanf("%d", &n);
	for (i = 2; i * i <= n; ++i)
	{
		if (n % i != 0)//���������������;
		{
			continue;
		}
		else
		{
			sum = 0;//���ó���
			int temp = n;//temp��¼n
			int j = i;//����������
			while (temp % j == 0)
			{
				temp /= j;
				sum++;
				j++;
			}
			if (num < sum)
			{
				start = i;//���ֵ
				num = sum;//��󳤶�
			}
		}
	}
	if (num == 0)//numΪ0��nΪ����
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