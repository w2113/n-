#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include<string.h>
int main()
{
	char str[100] = { 0 };
	gets(str);
	int len = strlen(str);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if ((str[i] == 'g' || str[i] == 'G') &&
			(str[i + 1] == 'z' || str[i + 1] == 'Z') &&
			(str[i + 2] == 'u' || str[i + 2] == 'U'))
		{
			str[i] = ' ';
			str[i + 1] = ' ';
			str[i + 2] = ' ';
		}
	}
	char* p = str;
	i = 0;
	while (*p)
	{
		if (*p != ' ')
			str[i++] = *p;
		p++;
	}
	str[i] = '\0';
	puts(str);
	return 0;
}