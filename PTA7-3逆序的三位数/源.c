#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main()
{
	int a;
	int b;

	scanf("%d", &a);

	b = a / 100 + a % 100 / 10 * 10 + a % 10 * 100;
	printf("%d", b);

	return 0;
}