#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int prime(int s)
{
    if (s == 1)
        return 0;
    else
    {
        for (int i = 2; i <= sqrt(s); i++)
        {
            if (s % i == 0)
                return 0;
        }
    }
    return 1;
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int sum = 0;
    while (scanf("%d", &sum) != EOF)
    {
        if (prime(sum))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}