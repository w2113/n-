#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int a = 0, b = 0, i = 0, j = 1, add = 0;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        add += i;
        printf("%5d", i);
        if (j % 5 == 0 && b - a != 4)
            printf("\n");
        j++;
    }
    printf("\nSum = %d", add);
    return 0;
}