#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int x = 0, y = 0, flag = 0;
    for (x = 1; x * x <= n; x++)
    {
        for (y = x; x * x + y * y <= n; y++)
        {
            if (x * x + y * y == n)
            {
                printf("%d %d\n", x, y);
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