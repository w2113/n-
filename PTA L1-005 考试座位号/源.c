#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
typedef struct number
{
    char id[20];
    int cmp;
    int no;
}nums;
int main()
{
    int n = 0, i = 0;
    scanf("%d", &n);
    nums num[n];
    for (i = 0; i < n; i++)
    {
        scanf("%s %d %d", &num[i].id, &num[i].cmp, &num[i].no);
    }
    int m = 0, mcmp = 0;
    scanf("%d", &m);
    while (m)
    {
        scanf("%d", &mcmp);
        for (i = 0; i < n; i++)
        {
            if (num[i].cmp == mcmp)
            {
                printf("%s %d\n", num[i].id, num[i].no);
            }
        }
        m--;
    }
    return 0;
}