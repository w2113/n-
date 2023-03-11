#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000] = { 0 };
	gets(s);
	int count = 0;
	for (int i = 0; s[i]!='.'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			count++;
		}
		if (s[i] == ' '||s[i+1]=='.')
		{

			if (count != 0)
			{
				printf("%d ", count);
			}
			count = 0;
		}
	}
	return 0;
}