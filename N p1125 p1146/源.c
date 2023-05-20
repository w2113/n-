#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int a1[2][3] = { 0 };
    int a2[3][2] = { 0 };
    int i = 0;
    int j = 0;
    for (i = 0; i <=1; i++)
    {
        for (j = 0; j <= 2; j++)
        {
            scanf("%d,", &a1[i][j]);
            a2[j][i] = a1[i][j];
        }
    }
    for (i = 0; i <= 2; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            printf("%d ", a2[i][j]);
        }
        printf("\n");
    }
    return 0;
}