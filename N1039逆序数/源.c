#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char n[6] = { 0 };
	scanf("%s", n);
	int count = strlen(n);
	printf("%d\n", count);
	char* p = n;
	while (*p)
	{
		printf("%c ", *p++);
	}
	printf("\n");
	while (*--p && count--)
	{
		printf("%c", *p);
	}
	return 0;
}