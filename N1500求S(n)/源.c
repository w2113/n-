#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//int��Χ10��9�Σ� long long��Χ10��18�� 
int main() {
	//0<n<1000000,n^5���10��30�� ������Χ ����ͬģ�ඨ��
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