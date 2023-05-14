#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("2^%d = %d", n, (int)pow(2, n));
    return 0;
}