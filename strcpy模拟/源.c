#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<assert.h>//const修饰不许home被修改
char* my_strcpy(char* end,const char* home)
{
	assert(home!=NULL);
	assert(end!=NULL);//断言
	char* ret = end;//留下起始地址
	while (*end++ = *home++)
	{
		;//ascii码值判断，直到\0copy完成，\0为假循环停止
	}
	return ret;//返回起始地址
}
int main()
{
	char arr1[20] = "xxxxxxxx";
	char arr2[] = "hello";
	//strcpy(arr1, arr2);
	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}