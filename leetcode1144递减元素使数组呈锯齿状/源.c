#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>//fmax��fminͷ�ļ�
#include <limits.h>//INT_MAXͷ�ļ�
int movesToMakeZigzag(int* nums, int numsSize)
{
    int s[2] = { 0 };//��¼��ż�任������
    for (int i = 0; i < numsSize; ++i)
    {//ö��λ��
        int left = i ? nums[i - 1] : INT_MAX;//��¼��ǰλ�õ�����Ԫ��
        int right = i < numsSize - 1 ? nums[i + 1] : INT_MAX;
        s[i % 2] += fmax(nums[i] - fmin(left, right) + 1, 0);//ȡ���任����С������
    }
    return fmin(s[0], s[1]);
}
int main()
{
    int nums[5] = { 1,5,5,8,3 };
    printf("%d",movesToMakeZigzag(&nums, 5));
	return 0;
}