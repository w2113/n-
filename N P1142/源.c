#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z, i;
    for (i = 100; i < 1000; i++) {
        x = i / 100;
        y = i / 10 % 10;
        z = i % 100 % 10;
        if (i == pow(x, 3) + pow(y, 3) + pow(z, 3))
        {
            printf("%d\n", i);
        }
    }
    return 0;
}