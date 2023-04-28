#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>

char str[101][11];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for (int i = 1; i <= k; i++)
    {//冒泡排序第一行是比较次数，一般是n-1次
        for (int j = 0; j <= n - 1 - i; j++)
        {//第二行是从0开始，小于等于n-1-i
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                char temp[11];
                strcpy(temp, str[j]);//后一个元素赋给前一个
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}