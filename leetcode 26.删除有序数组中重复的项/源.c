#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
int removeDuplicates(int* nums, int numsSize)
{
    if (numsSize == 0)
    {
        return 0;
    }
    int fast = 1, low = 0;
    while (fast < numsSize)
    {
        if (nums[fast] != nums[low])
        {
            nums[low + 1] = nums[fast];
            low++;
        }
        fast++;
    }
    return low + 1;
}
