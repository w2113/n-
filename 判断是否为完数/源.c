#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int isPerfectNum(int n)//�ж�n�Ƿ�Ϊ����������ǣ��򷵻�1�����򷵻�0
{
    int i, s = 0;
    for (i = 1; i < n; i++)//����С��n������
        if (n % i == 0)//����������Ϊ������
            s += i;//�ۼ�ÿ�������ӵ�s�� 
    if (s == n)//���������������������1
        return 1;
    else //�����������������0
        return 0;
}
int main()
{
    int n;
    printf("��������Ҫ�жϵ�����");
    scanf("%d", &n);//����nֵ
    if (isPerfectNum(n))//�ж��Ƿ�Ϊ����������������
        printf("%d ������\n", n);
    else
        printf("%d ��������\n", n);
    return 0;
}