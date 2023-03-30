#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	char ch = 0;
	scanf("%d.%d.%d.%d", &a, &b, &c, &d);
	if (a > 255 || b > 255 || c > 255 || d > 255)
	{
		printf("Error\n"); return 0;
	}
	while ((ch = getchar()) != '\n')
	{
		printf("Error\n");
		return 0;
	}
	printf("0x%02X%02X%02X%02X\n", a, b, c, d);
	return 0;
}