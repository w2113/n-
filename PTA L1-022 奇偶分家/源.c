#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int n = 0, val = 0, odd = 0, even = 0;
    scanf("%d", &n);
    while (scanf("%d", &val) != EOF)
    {
        if (val % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", odd, even);
    return 0;
}