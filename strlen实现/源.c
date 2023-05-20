#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str-start;
}
int main()
{
	int len = my_strlen("abc");
	printf("%d", len);
	return 0;
}