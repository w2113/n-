#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 9; i <= 100; i++)
	{
		if (i % 10 == 9)//��λΪ9
		{
			count++;
		}
		if (i / 10 == 9)//ʮλΪ9
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}