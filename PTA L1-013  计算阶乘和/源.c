#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
    int N;
    int i;
    int s = 1, S = 0;
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        s = s * i;
        S = S + s;
    }
    printf("%d", S);
}
