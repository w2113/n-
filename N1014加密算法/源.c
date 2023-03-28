#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
void encryption(char str[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if ((str[i] < 'x' && str[i] >= 'a') || (str[i] < 'X' && str[i] >= 'A'))
		{
			str[i] += 3;
		}
		else if
			((str[i] <= 'z' && str[i] >= 'x') || (str[i] <= 'Z' && str[i] >= 'X'))
		{
			str[i] -= 23;
		}
	}
}
int main()
{
	char str[100] = { 0 };
	gets(str);
	int len = strlen(str);
	encryption(str, len);
	puts(str);
	return 0;
}