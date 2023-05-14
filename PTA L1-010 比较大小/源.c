#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int a = 0, b = 0, c = 0, tmp = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a > c)
    {
        tmp = a; a = c; c = tmp;
    }
    if (b > c)
    {
        tmp = b; b = c; c = tmp;
    }
    printf("%d->%d->%d", a, b, c);
    return 0;
}