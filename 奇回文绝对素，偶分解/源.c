#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int prime(int n) {
	int i;
	for (i = 2; i < n; i++)
		if (n % i == 0)break;
	return i == n;
}
void main() {
	int prime(int);
	int n, i;
	printf("输入一个数n: ");
	scanf("%d", &n);
	if (n % 2) {
		for (i = 100; i < 1000; i++)
			if (prime(i) && prime(i % 10 * 100 + ((i / 10) % 10) * 10 + i / 100))
				printf("%6d  ", i);
	}
	else if ((n >= 10) && (n <= 20))
		for (i = 2; i <= n / 2; i++)
			if (prime(i) && prime(n - i))
				printf("%d=%d+%d\n", n, i, n - i);
	return 0;
}