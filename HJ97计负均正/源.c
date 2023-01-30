#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int cnt = 0, cnt2 = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a < 0)
            cnt++;
        else if (a > 0)
        {
            sum += a;
            cnt2++;
        }
    }
    printf("%d ", cnt);
    if (cnt2)
        printf("%.1f", sum * 1.0 / cnt2);
    else
        printf("0.0");
    return 0;
}
