#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int isPerfectNum(int n)//判断n是否为完数，如果是，则返回1，否则返回0
{
    int i, s = 0;
    for (i = 1; i < n; i++)//遍历小于n的整数
        if (n % i == 0)//可以整除，为真因子
            s += i;//累加每个真因子到s上 
    if (s == n)//如果符合完数条件，返回1
        return 1;
    else //如果不是完数，返回0
        return 0;
}
int main()
{
    int n;
    printf("请输入需要判断的数：");
    scanf("%d", &n);//输入n值
    if (isPerfectNum(n))//判断是否为完数，并输出结果。
        printf("%d 是完数\n", n);
    else
        printf("%d 不是完数\n", n);
    return 0;
}