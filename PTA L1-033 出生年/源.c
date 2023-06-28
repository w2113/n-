#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int y, n, count = 0, cnt = 0;
    scanf("%d %d", &y, &n);
    while (1)
    {
        int flag[10] = { 0 };
        cnt = 0;
        int t = y;
        if (t < 1000)
        {
            flag[0] = 1;
            cnt++;
        }
        while (t)
        {
            int a = t % 10;
            if (flag[a] == 0)
            {
                flag[a] = 1;
                cnt++;
            }
            t /= 10;
        }
        if (cnt == n)
            break;
        y++;
        count++;
    }
    printf("%d %04d\n", count, y);
    return 0;
}
