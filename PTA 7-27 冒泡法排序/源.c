#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int N, K, t = 0;
    int i, j;
    int a[100];
    scanf("%d %d", &N, &K);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < K; i++)
    {
        for (j = 0; j < N - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j + 1];
                a[j + 1] = a[j];
                a[j] = t;
            }
        }
    }
    for (i = 0; i < N - 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("%d", a[N - 1]);
    return 0;
}