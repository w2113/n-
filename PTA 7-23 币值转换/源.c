#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    char s[9] = { 0 };
    char b[9] = { '\n','S','B','Q','W','S','B','Q','Y' };
    scanf("%s", s);
    if (s[0] == '0')
    {
        printf("a\n");
        return 0;
    }
    int len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] == '0')
        {
            if (i == len - 4)
                printf("W");
            if (i < len - 1 && s[i + 1] == '0' || i == len - 1)
                continue;
            else
                printf("a");
        }
        else
            printf("%c%c", s[i] + 'a' - '0', b[len - i - 1]);
    }
    return 0;
}