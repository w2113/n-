#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%X", n);
//	return 0;
//}
int main()
{
	int n = 0;
	scanf("%d", &n);
	char x[40]= "0123456789ABCDEF";
	char y[100];
	int cnt=0,i=0;
	if (n == 0)
		printf("0");
	while (n != 0)
	{
		y[++cnt] = x[n % 16];
		n = n / 16;
	}
	for (i = cnt; i > 0; i--)
	{
		printf("%c", y[i]);
	}
	return 0;
}