#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <iostream>
int main()
{
    char ch;
    int count = 0;
    while (scanf("%c", &ch))
    {
        if (ch == '.')
            break;
        if (ch == ' ')//如果为空格则输出之前记录的字符数，并跳过本次循环
        {
            if (count > 0)
                std::cout << count << " ";
            count = 0;
            continue;
        }
        count++;
    }
    if (count > 0)
        std::cout << count;
    return 0;
}
#include<stdio.h>
int main() {
    char a;
    int sum = 0, flag = 0;
    while (1) {
        scanf("%c", &a);
        if (a != ' ' && a != '.') {
            sum++;
        }
        if (a == ' ' && sum != 0 || a == '.' && sum != 0) {
            if (flag == 0) { printf("%d", sum); sum = 0; flag = 1; }
            else {
                printf(" %d", sum);
                sum = 0;
            }
        }
        if (a == '.')break;
    }
    return 0;
}