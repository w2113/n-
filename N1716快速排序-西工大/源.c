#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int partition(int a[], int l, int r) {
	int temp = a[l];
	while (l < r) {
		while (a[r] > temp && r > l)r--;
		a[l] = a[r];
		while (a[l] <= temp && r > l)l++;
		a[r] = a[l];
	}
	a[l] = temp;
	return l;
}
void quicksort(int a[], int l, int r) {
	if (l < r) {
		int pari = partition(a, l, r);
		quicksort(a, l, pari - 1);
		quicksort(a, pari + 1, r);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	quicksort(a, 0, n - 1);
	for (int i = 0; i < n; i++) {
		if (i == 0)printf("%d", a[i]);
		else printf(" %d", a[i]);
	}
	return 0;
}