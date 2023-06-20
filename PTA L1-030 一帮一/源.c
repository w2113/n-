#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdio.h>
int main()
{
    int N, sex[50], flag[50] = { 0 }, i, j;
    char name[50][20];
    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%d %s", &sex[i], name[i]);
    }
    for (i = 0; i < N; i++)
    {
        for (j = N - 1; j >= 0; j--)
        {
            if (flag[i] == 0 && flag[j] == 0 && sex[i] != sex[j])
            {
                printf("%s %s\n", name[i], name[j]);
                flag[i] = 1;
                flag[j] = 1;
            }
        }
    }
    return 0;
}
