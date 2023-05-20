#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int m = a>b?a:b;
	while (1)
	{
		if (m % a == 0 & m % b == 0)
		{
			printf("%d\n", m);
			break;
		}	
		m++;
	}

	return 0;
}