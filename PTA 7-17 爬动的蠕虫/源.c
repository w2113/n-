#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
    int N = 0, U = 0, D = 0;
    scanf("%d %d %d", &N, &U, &D);
    int H = 0;//记录爬了多少米
    int time = 0;
    while (1)
    {
        H += U;
        time++;
        if (H >= N)
        {
            break;
        }
        else
        {
            H = H - D;
            time++;
        }
    }
    printf("%d", time);
    return 0;
}