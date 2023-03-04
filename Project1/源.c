#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}	
		s1++;
		s2++;	
	}
	if (*s1 < *s2)
	{
		return *s2 - *s1;
	}
	else
	{
		return *s1 - *s2;
	}	
}
int main()
{
	char str[] = "asgfg";
	char str1[] = "asgfgs";
	int ret = my_strcmp(str, str1);
	printf("%d",ret);
	return 0;
}