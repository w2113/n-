#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//给定一个大小为 n 的数组，找到其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n / 2 ⌋ 的元素。
//你可以假设数组是非空的，并且给定的数组总是存在多数元素。
int majorityElement(int* nums, int numsSize)
{
    /*思路"23335" 首先从字符 2 开始计数 1 ，遇到 3 ，不同则 - 1 ，互拼消耗 重新从剩下的 "335" 开始的过程，这时
 候保存的字符为 3 ，遇到 3 则计数 + 1 ， 遇到5则计数 - 1 ，在计数不为 0 时，走到末尾保存的字符就是个数超过
  n / 2 的字符*/
    int t = nums[0];
    int count = 1;
    for (int i = 1; i < numsSize; i++)
    {
        if (t == nums[i])
        {
            count++;//相等计数+1
        }
        else
        {
            count--;//不相等-1
        }
        if (count == 0)
        {
            t = nums[i + 1];//如果为0换下个数比较
        }
    }
    return t;
}