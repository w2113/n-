#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int y = 0, f = 0, flag = 0;
    for (y = 0; y <= 99; y++)
    {
        for (f = 0; f <= 99; f++)
        {
            if (200 * y + 2 * f + n == f * 100 + y)
            {
                printf("%d.%d", y, f);
                flag++;
            }
        }
    }
    if (flag == 0)
    {
        printf("No Solution\n");
    }
    return 0;
}