#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0, j = 0, a = 0, sum = 0, num = 0, temp = 0, qidian = 0, longqidian = 0;
	int x = sqrt(n);//�������һ�£�Ϊʲôsqrt(n),��Ϊ�������ٵ����Ӿ�����Ϊ�������������������������������������ֵ��˵��ڸ������ǿ����ţ����������ǽ�ʡ����ʱ�䣬��ֹ��ʱ
	for (i = 2; i <= x; i++)
	{
		num = 0;
		sum = n;
		qidian = i;
		for (j = i; sum % j == 0 && sum != 0; j++)
		{
			sum /= j;
			num++;
		}
		if (num > temp)
		{
			temp = num;//ɸѡ����Ӹ���
			longqidian = qidian;
		}
	}
	if (temp == 0)
		printf("1\n%d", n);
	else
	{
		printf("%d\n", temp);
		i = longqidian;
		while (i < longqidian + temp)
		{
			if (i != longqidian)
				printf("*");
			printf("%d", i);
			i++;
		}
	}
	return 0;
}