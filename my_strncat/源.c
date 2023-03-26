#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<assert.h>
//char* my_strncpy(char* dest, const char* s, size_t n)
//{
//	assert(dest && s);
//	char* d = dest;
//	while ((*dest++ = *s++) && (--n));
//	return d;
//}
char* my_strncat(char* dest, const char* s, size_t n)
{
	assert(dest && s);
	char* d = dest;
	while (*dest)dest++;
	while ((*dest++ = *s++) && (--n));
	return d;
}
int main()
{
	char str[20] = { "hello lili" };
	char cp[20] = { "hello world" };
	//my_strncpy(str, cp, 11);
	//strncpy(str, cp, 11);
	printf("%s\n", my_strncat(str, cp, 5));
	//printf("%s\n", strncat(str, cp, 5));
	return 0;
}