#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include<string.h>
int comp(const void* a, const void* b)
{
    return *(char*)a - *(char*)b;
}
int main()
{
    char str[1024];
    while (scanf("%s", str) != EOF)
    {
        int n = strlen(str);
        qsort(str, n, sizeof(char), comp);
        printf("%s\n", str);
    }
    return 0;
}
//Lily�Ͽ�ʱʹ����ĸ����ͼƬ��С������ѧϰӢ�ﵥ�ʣ�ÿ�ζ���Ҫ����ЩͼƬ���մ�С
//��ASCII��ֵ��С���������պá����Ҹ�Lily��æ��ͨ��C���Խ����
//����������Lilyʹ�õ�ͼƬ����"A" ��"Z" ��"a" ��"z" ��"0" ��"9" ��
// ������ĸ�����ָ���������1024 ��
//���������Lily������ͼƬ���մ�С�����˳�����