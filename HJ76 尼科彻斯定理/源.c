#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//����
//��֤��Ƴ�˹���������κ�һ������m������������д��m����������֮�͡�
////���磺//
//1 ^ 3 = 1
//
//2 ^ 3 = 3 + 5
//
//3 ^ 3 = 7 + 9 + 11
//
//4 ^ 3 = 13 + 15 + 17 + 19
//
//����һ��������m��m��100������m������д��m����������֮�͵���ʽ�����
//���ݷ�Χ��
//1��m��100
//���ף�ʱ�临�Ӷȣ�O(m) ���ռ临�Ӷȣ�O(1)//
//����������//����һ��int����
//���������//����ֽ���string
//ʾ��1
//���룺
//6
//�����
//31 + 33 + 35 + 37 + 39 + 41
#include <math.h>
#include <stdio.h>

int main() {
    int m = 0;
    int first = 0;
    int sum = 0;
    scanf("%d", &m);
    first = m * m - m + 1;
    sum = pow(m, 3);
    while (sum -= first)
    {
        printf("%d+", first);
        first += 2;
    }
    printf("%d", first);
    return 0;
}