#include<stdio.h>
int main() {

	int n;
	while (scanf("%ld", &n) != EOF) {
		long a[71] = { 1,1,2 };
		for (int i = 3; i <= n; i++) {
			a[i] = a[i - 1] + a[i - 2] + a[i - 3];
		}
		long t = a[n];
		printf("%ld\n", t);


	}
	return 0;
}