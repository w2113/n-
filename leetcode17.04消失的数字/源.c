#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//����nums������0��n������������������ȱ��һ����
//���д�����ҳ��Ǹ�ȱʧ��������
//���а취��O(n)ʱ���������
int missingNumber(int* nums, int numsSize)
{
    int i = 0, x = 0;
    for (i = 0; i < numsSize; i++)
    {
        x ^= nums[i];
    }
    for (i = 0; i <= numsSize; i++)
    {
        x ^= i;
    }
    return x;
}