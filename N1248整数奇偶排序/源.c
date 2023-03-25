#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main() {
    int a[10];// = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    while (scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]) != EOF) {
        int num[101] = { 0 };
        for (int i = 0; i < 10; i++) {
            num[a[i]]++;
        }

        for (int i = 100; i >= 0; i--) {
            while (i % 2 == 1 && num[i]) {
                printf("%d ", i);
                num[i]--;
            }
        }
        for (int i = 0; i <= 100; i++) {
            while (i % 2 == 0 && num[i]) {
                printf("%d ", i);
                num[i]--;
            }
        }
    }
    return 0;
}