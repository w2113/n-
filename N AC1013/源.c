#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    int right = 0, left = 0;
    int i, j;
    scanf("%d", &n);
    if (n < 2)
    {
        printf("2\n");
        return 0;
    }
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            for (i = 1; i < n - 2; i++)
            {
                for (j = 2; j <= sqrt(n + i); j++)

                    if ((n + i) % j == 0)

                        break;

                if (j > sqrt(n + i))

                    right = 1;

                /*for (j = 2; j <= sqrt(n - i); j++)
                    if ((n - i) % j == 0)
                        break;
                if (j > sqrt(n - i))
                    left = 1;*/
                if (right == 1 || left == 1)
                    break;

            }
            if (right == 1)
                printf("%d\n", n + i);
            break;
            /*if (left == 1)
                printf("%10d", n - i);*/
        }
    }
    if (i == n / 2 + 1)
    {
        printf("%d\n", n);
    }
    return 0;
}