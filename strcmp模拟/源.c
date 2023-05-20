#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<assert.h>
int my_strcmp(const char* p1, const char* p2)
{
	assert(p1&&p2);
	while (*p1 == *p2)
	{
		if (*p1 == '\0')
		{
			return 0;
		}
		p1++;
		p2++;
	}
	if (*p1 > *p2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
int main()
{
	char* p = "safe";
	char* c = "safe";
	int ret=my_strcmp(p, c);
	if (ret > 0)
	{
		printf("p>c\n");
	}
	else if (ret < 0)
	{
		printf("p<c\n");
	}
	else
	{
		printf("p==c\n");
	}
	//printf("%d",strcmp(p, c));
	//printf("%s\n", p);
	return 0;
}