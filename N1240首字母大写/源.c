
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include<string.h>
int main()
{
	char str[100] = { 0 };
	gets(str);
	if (str[0] <= 'z' && str[0] >= 'a')
	{
		str[0] = str[0] - 32;
	}
	int len = strlen(str);
	for (int i = 1; i < len; i++)
	{
		if (str[i - 1] == ' ' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '\r' ||
			str[i - 1] == '\n')
		{
			if (str[i] <= 'z' && str[i] >= 'a')
			{
				str[i] = str[i] - 32;
			}
		}

	}
	puts(str);
	return 0;
}