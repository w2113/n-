#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<assert.h>//const���β���home���޸�
char* my_strcpy(char* end,const char* home)
{
	assert(home!=NULL);
	assert(end!=NULL);//����
	char* ret = end;//������ʼ��ַ
	while (*end++ = *home++)
	{
		;//ascii��ֵ�жϣ�ֱ��\0copy��ɣ�\0Ϊ��ѭ��ֹͣ
	}
	return ret;//������ʼ��ַ
}
int main()
{
	char arr1[20] = "xxxxxxxx";
	char arr2[] = "hello";
	//strcpy(arr1, arr2);
	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}