#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int main()
{
    int n = 0;
    char c;
    scanf("%d %c", &n, &c);
    int i = 0, j = 0;
    int h = sqrt((n + 1) / 2);
    int count = 0;
    for (i = 0; i < h; i++)
    {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 2 * (h - i); j > 1; j--)
        {
            count++;
            printf("%c", c);
        }
        printf("\n");
    }
    for (i = 1; i < h; i++)
    {
        for (j = 1; j <= h - i - 1; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
        {
            count++;
            printf("%c", c);
        }
        printf("\n");
    }
    printf("%d", n - count);
    return 0;
}