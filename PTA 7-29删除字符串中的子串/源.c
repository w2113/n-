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
	char t[100];//��ʱ����
	char* p;//�������strstr�����ɹ�Ѱ�Һ󷵻صĵ�ַ 
	while ((p = strstr(s1, s2)) != NULL)//������ֵ������NULL���Ϳ�ʼɾ������
	{
		strcpy(t, p + strlen(s2));//p��Ҫ����s2�ĳ�����������ɾ�����Ӵ�����֮����ַ�����������ʱ���� 
		*p = '\0';//��pĿǰָ����ַ���Ϊ'\0'��������һ��ʵ��strcat���� 
		strcat(s1, t);//����ʱ�������s1����ֹ��֮�󣨼�p��λ�ã� 
	}
	puts(s1);
	return 0;
}
