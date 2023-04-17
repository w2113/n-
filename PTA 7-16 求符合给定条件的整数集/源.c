#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int a, b;
    int i, j, k;
    int flag;
    flag = 0;

    scanf("%d", &a);
    b = a + 4;
    for (i = a; i < b; i++)
    {
        for (j = a; j < b; j++)
        {
            for (k = a; k < b; k++)
            {
                if (i != j && k != i && k != j)
                {
                    flag++;
                    if (flag % 6 != 0)
                    {
                        printf("%d ", i * 100 + j * 10 + k);
                    }
                    else
                    {
                        printf("%d\n", i * 100 + j * 10 + k);
                    }
                }

            }
        }
    }

    return 0;
}