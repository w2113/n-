#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include<math.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    float circumference = a + b + c;
    float area = circumference / 2;
    area = sqrt(area * (area - a) * (area - b) * (area - c));
    printf("circumference=%.2f area=%.2f", circumference, area);
    return 0;
}