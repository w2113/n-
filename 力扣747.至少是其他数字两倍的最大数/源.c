#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
int dominantIndex(int* nums, int numsSize)
{
    //找到第二大的元素，将它的两倍的值与最大值进行比较
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
//给你一个整数数组 nums ，其中总是存在 唯一的 一个最大整数 。
//请你找出数组中的最大元素并检查它是否 至少是数组中每个其他数字的两倍 。如果是，则返回 最大元素的下标 ，否则返回 -1 
