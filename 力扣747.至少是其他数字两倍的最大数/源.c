#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
int dominantIndex(int* nums, int numsSize)
{
    //�ҵ��ڶ����Ԫ�أ�������������ֵ�����ֵ���бȽ�
    int max = 0, idx = 0, less = 1;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] > max)
        {
            less = max;
            max = nums[i];
            idx = i;
        }
        else if (nums[i] > less)
        {
            less = nums[i];
        }
    }
    return max >= (less * 2) ? idx : -1;
}
//����һ���������� nums ���������Ǵ��� Ψһ�� һ��������� ��
//�����ҳ������е����Ԫ�ز�������Ƿ� ������������ÿ���������ֵ����� ������ǣ��򷵻� ���Ԫ�ص��±� �����򷵻� -1 
