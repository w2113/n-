#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int count[26] = { 0 };
	while (gets(str))
	{
		int len = strlen(str);
		int i = 0;
		for (i = 0; i < len; i++)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				++count[str[i] - 'A'];
			}
		}
		for (i = 0; i < 26; i++)
		{
			printf("%c:%d\n", 'A' + i, count[i]);
		}
	}
	return 0;
}