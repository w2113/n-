#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int isPrime(int n) {
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		if (a > b) {
			int temp = a;
			a = b;
			b = temp;
		}
		int count = 0;
		for (int i = a; i <= b; i++) {
			if (isPrime(i)) {
				count++;
			}
		}
		printf("%d\n", count);
	}
	return 0;
}