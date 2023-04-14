#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int h = 0, m = 0;
    scanf("%d:%d", &h, &m);
    if (h > 12)
    {
        h -= 12;
        printf("%d:%d PM", h, m);
    }
    else if (h == 12)
    {
        printf("%d:%d PM", h, m);
    }
    else
    {
        printf("%d:%d AM", h, m);
    }
    return 0;
}