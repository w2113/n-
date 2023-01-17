#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	char str[100] = { 0 };
	char str1[100] = { 0 };
	char str2[100] = { 0 };
	char str3[100] = { 0 };
	int i = 0;
	int n = 0,k=0,s=0;
	scanf("%s", &str);
	for (i = 0; i < 100; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z'|| str[i] >= 'a' && str[i] <= 'z')
		{
			str3[n++] = str[i];
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			str2[k++] = str[i];
		}
		else
		{
			str1[s++] = str[i];
		}
	}
	puts(str3);
	puts(str2);
	puts(str1);
	return 0;
}