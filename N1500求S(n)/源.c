#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//int范围10的9次， long long范围10的18次 
int main() {
	//0<n<1000000,n^5最大10的30次 超出范围 ，用同模余定理
	int a;
	while (scanf("%d", &a) != EOF) {
		int m = a;
		for (int i = 1; i < 5; i++) {
			m = (m % 3) * (a % 3);
		}
		printf("%d\n", m % 3);
	}


	return 0;
}