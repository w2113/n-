#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<assert.h>
#include<ctype.h>
#include<limits.h>
enum state
{
	illegal,//�Ƿ�
	valid//�Ϸ�
};
enum state s=illegal;//��¼�Ϸ����ǷǷ�
int my_atoi(const char* s)
{
	assert(s);
	int flag = 1;
	if (*s == '\0')//���ַ�
	{
		return 0;
	}
	while (isspace(*s))//�����հ��ַ�
	{
		s++;
	}
	if (*s == '+')
	{
		flag = 1;
		s++;//�ж�������
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