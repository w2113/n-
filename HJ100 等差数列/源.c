#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//�Ȳ����� 2��5��8��11��14��������
//���� 2 ��ʼ�� 3 Ϊ����ĵȲ����У������Ȳ�����ǰn���
//���ݷ�Χ��
//1��n��1000
//����������
//����һ��������n��
//���������
//���һ����Ӻ������
#include <stdio.h>

int main() {
    int n = 0;
    int sum = 2;
    scanf("%d", &n);
    sum = n * 2 + 3 * (n - 1) * n / 2;
    printf("%d", sum);
    return 0;
}