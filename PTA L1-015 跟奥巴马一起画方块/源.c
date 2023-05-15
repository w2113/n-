#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int n = 0;
    char c;
    scanf("%d %c", &n, &c);
    for (int i = 0; i < (n + 1) / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}