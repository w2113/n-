#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
void fun(char* ss)
{
    int len = strlen(ss);
    int i = 0;
    for (i = 1; i < len; i += 2)
    {
        if (ss[i] >= 'a' && ss[i] <= 'z')
        {
            ss[i] = ss[i] -32;
        }
    }
    printf("%s", ss);
}
int main()
{
    char s[] = { "asvadgfhsr1456sdghdsh" };
    fun(s);
    return 0;
}

