#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* s1, const char* s2)
{
	char* ret = s1;
	assert(s1 && s2);
	while (*s1)
	{
		s1++;
	}
	while (*s1++ = *s2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";
	//my_strcat(arr1, arr2);
	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}