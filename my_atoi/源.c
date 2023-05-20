#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>
enum state
{
	illegal,//非法
	valid//合法
};
enum state s=illegal;//记录合法还是非法
int my_atoi(const char* s)
{
	assert(s);
	int flag = 1;
	if (*s == '\0')//空字符
	{
		return 0;
	}
	while (isspace(*s))//跳过空白字符
	{
		s++;
	}
	if (*s == '+')
	{
		flag = 1;
		s++;//判断正负号
	}
	else if (*s == '-')
	{
		flag = -1;
		s++;
	}
	long long n = 0;
	while (isdigit(*s))
	{
		n = n * 10 + flag * (*s - '0');
		if (n > INT_MAX || n < INT_MIN)
		{
			return 0;
		}
		s++;
	}
	if (*s == '\0')
	{
		s = valid;
		return (int)n;
	}
	else
	{
		return (int)n;
	}
}
int main()
{
	const char* p ="          -26666";
	int ret = my_atoi(p);
	printf("%d", ret);
	return 0;
}