#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//дһ������������������֮�ͣ�
//Ҫ���ں������ڲ���ʹ��+��-��*��/����������š�
#include<stdio.h>
int Add(int num1, int num2)
{
	// write code here
	int m = 0, n = 0;
	m = (num1 & num2) << 1;//��λ
	n = num1 ^ num2;
	while (n & m)//����Ƿ�Ҫ��λ
	{
		num1 = m;
		num2 = n;
		m = (num1 & num2) << 1;
		n = num1 ^ num2;
	}
	return m|n;
}
int main()
{
	int x = 0, y = 0;
	scanf("%d %d", &x, &y);
	printf("%d", Add(x, y));
	return 0;
}