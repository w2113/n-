#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>//fmax，fmin头文件
#include <limits.h>//INT_MAX头文件
int movesToMakeZigzag(int* nums, int numsSize)
{
    int s[2] = { 0 };//记录奇偶变换操作数
    for (int i = 0; i < numsSize; ++i)
    {//枚举位置
        int left = i ? nums[i - 1] : INT_MAX;//记录当前位置的左右元素
        int right = i < numsSize - 1 ? nums[i + 1] : INT_MAX;
        s[i % 2] += fmax(nums[i] - fmin(left, right) + 1, 0);//取当变换的最小操作数
    }
    return fmin(s[0], s[1]);
}
int main()
{
    int nums[5] = { 1,5,5,8,3 };
    printf("%d",movesToMakeZigzag(&nums, 5));
	return 0;
}