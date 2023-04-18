#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int i = 0, j = 0, n = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d*%d=%-4d", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}