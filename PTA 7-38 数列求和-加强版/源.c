#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main() {
    int k, n;
    scanf("%d%d", &k, &n);
    int a[100005] = { 0 };
    if (n == 0)printf("0");
    int i, temp = 0;
    for (i = 0; i < n; i++) {
        a[i] = ((n - i) * k + temp) % 10;
        temp = ((n - i) * k + temp) / 10;
    }
    if (temp != 0)
        printf("%d", temp);
    for (i = n - 1; i >= 0; i--)printf("%d", a[i]);
    return 0;
}