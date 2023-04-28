#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100];
	gets(s1);
	char s2[100];
	gets(s2);
	char t[100];//临时数组
	char* p;//用来存放strstr函数成功寻找后返回的地址 
	while ((p = strstr(s1, s2)) != NULL)//若返回值不等于NULL，就开始删除操作
	{
		strcpy(t, p + strlen(s2));//p需要加上s2的长度来跳过被删除的子串，将之后的字符串拷贝至临时数组 
		*p = '\0';//把p目前指向的字符变为'\0'，用来下一步实现strcat函数 
		strcat(s1, t);//将临时数组接在s1的终止符之后（即p的位置） 
	}
	puts(s1);
	return 0;
}
