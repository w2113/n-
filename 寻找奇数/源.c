#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//Ѱ������
//��һ�У�һ������n����ʾ���еĳ��ȡ��ڶ��У�n��������ai��
//�������м��Կո������
//�������������Ψһ���������ε���
#include<stdio.h>
int main()
{
    int n = 0;
    int num = 0;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum ^= num;
    }

    printf("%d\n", sum);
    return 0;
}