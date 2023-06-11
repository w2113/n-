#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int d = 0;
    int day[8] = { 0,1,2,3,4,5,6,7 };
    scanf("%d", &d);
    if (d == 5)
        printf("7");
    else
        printf("%d", day[(d + 2) % 7]);
    return 0;
}