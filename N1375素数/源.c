#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int isprime(int n)//�ж��Ƿ�Ϊ����
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
		count = 0;//count����
		for (i = 1; i <= n; i += 10)//ÿ��+10���ɸ�λΪ1������
		{
			if (isprime(i))//��������ӡ
			{
				count++;//��¼����
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