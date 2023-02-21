#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0], min = a[0], m = 0, p = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] >= max) {
            max = a[i];
            m = i;
        }
        if (a[i] < min) {
            min = a[i];
            p = i;
        }
    }
    for (int i = 1; i < n; i++) {
        if (i != m && i != p)
            printf("%d ", a[i]);
    }

    return 0;
}