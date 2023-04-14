#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int n = 0;
    int x = 0, y = 0, hex = 0;
    scanf("%d", &n);

    x = n / 16;
    y = n % 16;
    hex = x * 10 + y;
    printf("%d", hex);
    return 0;
}