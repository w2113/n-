#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int time = 0;
    int ms = 0;
    scanf("%d %d", &time, &ms);
    int h = time / 100;
    int m = time % 100;
    if (ms > 0)
    {
        m = h * 60 + m + ms;
        time = (m / 60) * 100 + m % 60;
        printf("%d", time);
    }
    else
    {
        m = h * 60 + m + ms;
        h = m / 60;
        m = m - h * 60;
        printf("%d%d", h, m);
    }
    return 0;
}