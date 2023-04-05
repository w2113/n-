#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 1;
    int count = 0;
    for (int i = 100; i <= 999; i++)
    {
        n = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                n = 0;
            }
        }
        if (n)
        {
            count++;
        }
    }
    printf("%d ", count);
    return 0;
}
