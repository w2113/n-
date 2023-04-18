#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    int i = 0, rab = 0, Tor = 3 * t;
    for (i = 1; i <= t; i++)
    {
        if (i % 10 == 0 && rab > i * 3)
        {
            i += 30;
        }
        rab += 9;
    }
    if (Tor > rab)
        printf("@_@ %d", Tor);
    else if (Tor < rab)
        printf("^_^ %d", rab);
    else
        printf("-_- %d", rab);
    return 0;
}