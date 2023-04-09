#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//数组nums包含从0到n的所有整数，但其中缺了一个。
//请编写代码找出那个缺失的整数。
//你有办法在O(n)时间内完成吗？
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