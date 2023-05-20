#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>
int ans(int x, int y, int z)
{
    return (z + 2 * y + 3 * (y + 1) / 5 + x + x / 4 - x / 100 + x / 400) % 7;
}
int main()
{
    int a, b, c;
    scanf("%d.%d.%d", &a, &b, &c);
    if (b == 1 || b == 2)
    {
        b += 12;
        a -= 1;
    }
    int z = ans(a, b, c);
    switch (z)
    {
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Friday");
        break;
    case 5:
        printf("Saturday");
        break;
    case 6:
        printf("Sunday");
        break;
    default:
        printf("NULL");
        break;
    }
    return 0;
}
//基姆拉尔森计算公式。
//w = (x + 2y + 3(y + 1) / 5 + x + x / 4 + x / 100 + x / 400) % 7;
//x = 年份，y = 月份，z = 天数；
//用公年计算的，当y = 2或者y = 1时进行转换

