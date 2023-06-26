#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n, i;
    char c, str[100000];
    int len;
    scanf("%d %c", &n, &c);
    getchar();
    gets(str);
    len = strlen(str);
    if (n >= len)
    {
        for (i = 0; i < n - len; i++)
            printf("%c", c);
        printf("%s", str);
    }
    else if (n < len)
    {
        for (i = len - n; i < len; i++)
            printf("%c", str[i]);
    }
    return 0;
}
