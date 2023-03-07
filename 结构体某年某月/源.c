#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
typedef struct days
{
    int y;
    int m;
    int d;
}ds;
int main()
{
    ds a;
    int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    int day = 0;
    scanf("%d %d %d", &(a.y), &a.m, &a.d);
    if ((a.y % 4 == 0 && a.y % 100 != 0) || (a.y % 400 == 0))
    {
        arr[2] = 29;
    }
    for (int i = 0; i < a.m; i++)
    {
        day += arr[i];
    }
    day += a.d;
    printf("%d", day);
    return 0;
}