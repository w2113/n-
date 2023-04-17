#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int i = 1;
	double sum = 1;
	double pi = 1.0;
	double t = 0;
	scanf("%lf", &t);
	while (pi > t) {
		pi = pi * i / (i * 2 + 1);
		sum += pi;
		i++;
	}
	printf("%.6f", sum * 2); //本题求得是圆周率   即π，非π/2
	return 0;
}