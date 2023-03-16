#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<errno.h>
int main()
{
	char str[100] = { 0 };
	gets(str);
	int i = 0, alp = 0, num = 0, blank = 0, other = 0;
	for (i = 0; i < strlen(str); i++)
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			alp++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			num++;
		}
		else if (str[i] == ' ')
		{
			blank++;
		}
		else
		{
			other++;
		}
	}
	printf("%d %d %d %d", alp, num, blank, other);
	return 0;
}