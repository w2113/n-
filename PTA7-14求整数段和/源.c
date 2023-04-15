#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
	int a, b, i;
	int sum = 0;
	int couter = 0;    //用来计数 
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++) {        //i用来记录输出数字 
		sum += i;
		couter++;
		printf("%5d", i);     //输出5个字符 
		if (couter % 5 == 0 && i != b) {   //当计数达到5个的时候，就换行 
			printf("\n");
		}
	}
	printf("\n");
	printf("Sum = %d", sum);
	return 0;
}