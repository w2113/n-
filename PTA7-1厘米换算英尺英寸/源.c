#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int foot = n / 30.48;
    int inch = ((n / 30.48) - foot) * 12;
    printf("%d %d", foot, inch);
    return 0;
}