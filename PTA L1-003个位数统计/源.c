#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
    char n[1001];
    int i = 0;
    scanf("%s", n);
    int arr[10] = { 0 };
    int c;
    for (int i = 0; i < strlen(n); i++)
    {
        c = n[i] - '0';
        arr[c]++;
    }
    for (i = 0; i < 10; i++)
    {
        if (arr[i] != 0)
        {
            printf("%d:%d\n", i, arr[i]);
        }
    }
    return 0;
}