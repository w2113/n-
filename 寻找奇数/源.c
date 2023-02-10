#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//寻找奇数
//第一行：一个整数n，表示序列的长度。第二行：n个正整数ai，
//两个数中间以空格隔开。
//输出：在序列中唯一出现奇数次的数
#include<stdio.h>
int main()
{
    int n = 0;
    int num = 0;
    int sum = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        sum ^= num;
    }

    printf("%d\n", sum);
    return 0;
}