#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cmp(const void* e1, const void* e2)
{
	char* a = *(char**)e1;
	char* b = *(char**)e2;
	int result = strcmp(a, b);
	if (result > 0) 
	{
	         return 1;
		
	}
	else if (result < 0) 
	{
		  return -1;
		
	}
	else 
	{
		  return 0;
		
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = 0;
	char* p[100] = { NULL };
	for (i = 0; i < n; i++)
	{
		char*s=(char*)calloc(0,sizeof(20));
		scanf("%s", s);
		p[i] = s;
	}
	for (i = 0; i < n; i++)
	{
		qsort(p, n, sizeof(char*), cmp);
	}
	for (i = 0; i < n; i++)
	{
		printf("%s\n", p[i]);
	}
	return 0;
}
//与平常我们所用的数组相比，指针数组有些难理解，
//p这个指针数组存放n个指针，从1到n个元素存放常量字符串的地址
//那么我们向qsort传入p之后，qsort将p理解为指向数组中第一个元素的指针，
//所以第6行形参表中，e1和e2其实是指向“指向常量字符串的指针”的指针，
//是char **。而我们需要传给strcmp这个字符串比较函数的，
//是“指向字符串的指针”，是char * ，所以我们将void * 转换为char * *，
//然后解引用，得到char * ，赋予a和b。接下来使用strcmp对a和b进行比较。