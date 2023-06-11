#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20], b[20];
    scanf("%s", a);
    gets(b);
    int len_a = strlen(a), len_b = strlen(b);
    int i, j, flagA = 0, flagB = 0, A = 0, B = 0, t = 1;
    for (i = len_a - 1; i >= 0; i--)
    {
        if (a[i] - '0' < 0 || a[i] - '9' > 9)
        {
            flagA = 1;
            break;
        }
        A += t * (a[i] - '0');
        t *= 10;
    }
    if (A > 1000 || A < 1)
    {
        flagA = 1;
    }
    t = 1;
    for (j = len_b - 1; j >= 1; j--)
    {
        if (b[j] - '0' < 0 || b[j] - '9' > 9)
        {
            flagB = 1;
            break;
        }
        B += t * (b[j] - '0');
        t *= 10;
    }
    if (B > 1000 || B < 1)
    {
        flagB = 1;
    }
    if (!flagA && !flagB)
        printf("%d + %d = %d", A, B, A + B);
    else if (!flagA)
        printf("%d + ? = ?", A);
    else if (!flagB)
        printf("? + %d = ?", B);
    else
        printf("? + ? = ?");
    return 0;
}
