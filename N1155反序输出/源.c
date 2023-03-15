#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
void reverse(char s[])
{
	int len = strlen(s);
	int left = 0;
	int right = len-1;
	while (left < right)
	{
		char tmp = s[left];
		s[left] = s[right];
		s[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char s[4] = { 0 };
	while (scanf("%s", s) != EOF)
	{
		reverse(s);
		printf("%s\n", s);
	}
	return 0;
}