#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
	int a, b, i;
	int sum = 0;
	int couter = 0;    //�������� 
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++) {        //i������¼������� 
		sum += i;
		couter++;
		printf("%5d", i);     //���5���ַ� 
		if (couter % 5 == 0 && i != b) {   //�������ﵽ5����ʱ�򣬾ͻ��� 
			printf("\n");
		}
	}
	printf("\n");
	printf("Sum = %d", sum);
	return 0;
}