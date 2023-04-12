#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
int removeElement(int* nums, int numsSize, int val)
{
    int i = 0, j = 0, num = 0;
    for (i = 0, j = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[j++] = nums[i];
            num++;
        }

    }
    return num;
}