#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main() {
    char a[10001];
    int g = 0, p = 0, l = 0, t = 0;
    scanf("%s", a);
    int i = 0;
    while (a[i] != '\0') {
        switch (a[i])
        {
        case 'G':
        case 'g':g++; break;
        case 'p':
        case 'P':p++; break;
        case 'l':
        case 'L':l++; break;
        case 't':
        case 'T':t++; break;
        }
        i++;
    }
    while (g | p | l | t) {
        if (g) {
            printf("G"); g--;
        }
        if (p) {
            printf("P"); p--;
        }
        if (l) {
            printf("L"); l--;
        }
        if (t) {
            printf("T"); t--;
        }
    }
    printf("\n");
}