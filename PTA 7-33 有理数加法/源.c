#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int a1, a2, b1, b2;
	int a, b;
	scanf("%d/%d %d/%d", &a1, &b1, &a2, &b2);//������������ 
	if (b1 == b2)
	{
		a = a1 + a2;
		b = b1;
	}
	else
	{
		b = b1 * b2;
		a1 = a1 * b2;
		a2 = a2 * b1;
		a = a1 + a2;
	}			//�����������ӵĽ�� 

	int i;
	for (i = a; i > 0; i--)//����С������ 
	{
		if (a % i == 0 && b % i == 0)
		{
			a = a / i;
			b = b / i;
			break;
		}
	}
	if (a % b == 0)
		printf("%d", a);
	else
		printf("%d/%d", a, b);//��� 

	return 0;
}
