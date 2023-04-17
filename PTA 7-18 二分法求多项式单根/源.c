#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
double a3 = 0, a2 = 0, a1 = 0, a0 = 0;
double f(double);
int main()
{

	double a = 0, b = 0, mid = 0;
	scanf("%lf%lf%lf%lf\n", &a3, &a2, &a1, &a0);
	scanf("%lf%lf", &a, &b);
	while (b - a >= 0.001 && f(a) * f(b) <= 0) {
		if (f(a) == 0) {
			mid = a;
			break;
		}
		else if (f(b) == 0) {
			mid = b;
			break;
		}
		mid = (a + b) / 2;
		if (f(mid) == 0) {
			break;
		}
		else {
			if (f(a) * f(mid) >= 0) {
				a = mid;
			}
			else {
				b = mid;
			}
		}
	}
	printf("%.2lf", mid);
	return 0;
}

double f(double x) {
	double sum = 0;
	sum = a3 * x * x * x + a2 * x * x + a1 * x + a0;
	return sum;
}