#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

/**
 *
 * @param rotateArray int整型一维数组
 * @param rotateArrayLen int rotateArray数组长度
 * @return int整型
 */
//有一个长度为 n 的非降序数组，比如[1, 2, 3, 4, 5]，
//将它进行旋转，即把一个数组最开始的若干个元素搬到数组的末尾，
//变成一个旋转数组，比如变成了[3, 4, 5, 1, 2]，或者[4, 5, 1, 2, 3]这样的。
//请问，给定这样一个旋转数组，求数组中的最小值。
//数据范围1到10000，数组中任意元素的值0到10000
//空间复杂度o（1），时间复杂度o（logn）
int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    // write code here
    int i = 0;
    for (i = 1; i < rotateArrayLen; i++)
    {
        if (rotateArray[i - 1] > rotateArray[i])
            return rotateArray[i];
    }
    return rotateArray[0];
}