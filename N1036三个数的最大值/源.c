#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	scanf("%d %d %d", &a, &b, &c);
	max = (a > b ? a : b)>c? (a > b ? a : b):c;
	printf("%d\n", max);
	return 0;
}