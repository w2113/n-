#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    char* num_table[10] = { "ling", "yi",  "er", "san", "si",
                           "wu",   "liu", "qi", "ba",  "jiu" };
    scanf("%d", &num);
    if (num == 0) {
        printf("%s", num_table[0]);
    }
    else {
        if (num < 0) {
            printf("fu ");
            num = -num;
        }
        int num_base = 1;
        for (int t = num; t > 0; t /= 10) {
            num_base *= 10;
        }
        for (int m = num_base; m >= 10; m /= 10) {
            int num_sin = num % m / (m / 10);
            printf("%s", num_table[num_sin]);
            if (m != 10) {
                printf(" ");
            }
            else {
                printf("\n");
            }
        }
    }
    system("pause");
    return 0;
}
