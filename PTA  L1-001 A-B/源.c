#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100000];
    char s2[100000];
    gets(s1);
    gets(s2);
    for (int i = 0; i < strlen(s1); i++)
    {
        for (int j = 0; j < strlen(s2); j++)
        {
            if (s1[i] == s2[j])
            {
                s1[i] = -1;
            }
        }
    }
    for (int i = 0; i < strlen(s1); i++)
    {
        if (s1[i] != -1)
            printf("%c", s1[i]);
    }
}