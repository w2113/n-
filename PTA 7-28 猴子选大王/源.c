#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>//Լɪ������
int main()
{
    int n, i, s = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s = (s + 3) % i;
    printf("%d\n", s + 1);
    return 0;
}
