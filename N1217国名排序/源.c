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
//��ƽ���������õ�������ȣ�ָ��������Щ����⣬
//p���ָ��������n��ָ�룬��1��n��Ԫ�ش�ų����ַ����ĵ�ַ
//��ô������qsort����p֮��qsort��p���Ϊָ�������е�һ��Ԫ�ص�ָ�룬
//���Ե�6���βα��У�e1��e2��ʵ��ָ��ָ�����ַ�����ָ�롱��ָ�룬
//��char **����������Ҫ����strcmp����ַ����ȽϺ����ģ�
//�ǡ�ָ���ַ�����ָ�롱����char * ���������ǽ�void * ת��Ϊchar * *��
//Ȼ������ã��õ�char * ������a��b��������ʹ��strcmp��a��b���бȽϡ�