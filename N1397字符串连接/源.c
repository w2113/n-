#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
char* my_strcat(char* dest,const char*s)
{
	char* d = dest;
	while ((*dest++ = *s++) && (*s!=' '));
	return d;
}
int main()
{
	char s1[100] = { 0 };
	char s2[100] = { 0 };
	while (scanf("%s", s1) != EOF)
	{
		printf("%s", my_strcat(&s2, &s1));
	}
	return 0;
}
