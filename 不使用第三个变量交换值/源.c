#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;//��ʹ�õ�������������ֵ��
	a = a ^ b;
	printf("a=%d b=%d", a, b);
	return 0;
}