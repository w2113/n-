#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main() {
    int y = 0;
    int m = 0;
    int d = 0;
    int day[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
    while (scanf("%d %d %d", &y, &m, &d) != EOF)
    {
        int days = 0;
        for (int i = 0; i < m; i++)
        {
            days += day[i];
        }
        if (((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) && m > 2)
        {
            days += 1;
        }
        days += d;
        printf("%d\n", days);
    }
}