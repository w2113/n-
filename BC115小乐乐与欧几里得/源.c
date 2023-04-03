#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main() {
    long long a, b, comax, comin, k;
    scanf("%lld %lld", &a, &b);
    k = a * b;
    while (a && b) {
        if (a > b) a %= b;
        else b %= a;
    }
    comax = a > b ? a : b;
    comin = k / comax;
    printf("%lld\n", comax + comin);
}