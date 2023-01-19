#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//等差数列 2，5，8，11，14。。。。
//（从 2 开始的 3 为公差的等差数列）输出求等差数列前n项和
//数据范围：
//1≤n≤1000
//输入描述：
//输入一个正整数n。
//输出描述：
//输出一个相加后的整数
#include <stdio.h>

int main() {
    int n = 0;
    int sum = 2;
    scanf("%d", &n);
    sum = n * 2 + 3 * (n - 1) * n / 2;
    printf("%d", sum);
    return 0;
}