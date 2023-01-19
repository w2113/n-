#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//描述
//验证尼科彻斯定理，即：任何一个整数m的立方都可以写成m个连续奇数之和。
////例如：//
//1 ^ 3 = 1
//
//2 ^ 3 = 3 + 5
//
//3 ^ 3 = 7 + 9 + 11
//
//4 ^ 3 = 13 + 15 + 17 + 19
//
//输入一个正整数m（m≤100），将m的立方写成m个连续奇数之和的形式输出。
//数据范围：
//1≤m≤100
//进阶：时间复杂度：O(m) ，空间复杂度：O(1)//
//输入描述：//输入一个int整数
//输出描述：//输出分解后的string
//示例1
//输入：
//6
//输出：
//31 + 33 + 35 + 37 + 39 + 41
#include <math.h>
#include <stdio.h>

int main() {
    int m = 0;
    int first = 0;
    int sum = 0;
    scanf("%d", &m);
    first = m * m - m + 1;
    sum = pow(m, 3);
    while (sum -= first)
    {
        printf("%d+", first);
        first += 2;
    }
    printf("%d", first);
    return 0;
}