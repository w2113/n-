#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//#include<math.h>
//double exp(double x)
//{
//	double p = 1, e = 0, f = 1, i = 0, a = 0;
//	for (i = 1; i <= x; i++)
//	{
//		a = pow(x, i);
//		p = i * p;
//		e = a / p;
//		f += e;
//	}
//	return f;
//}
//int main()
//{
//	double x = 0;
//	scanf("%lf", &x);
//	printf("%lf",exp(x));
//	return 0;
//}
//int main()
//{
//	double e, item;
//	int i, x, k;
//	scanf("%d", &x);
//	item = 1.0;
//	e = 1.0;
//	i = 1;
//	k = x;
//	while (k / item >= 1e-6) {
//		item = item * i;
//		e = e + k / item;
//		i++;
//		k = k * x;
//	}
//	printf("\ne=%lf\n", e);
//	printf("共累加了%d项\n", i - 1);
//	return 0;
//}
void tob(unsigned int n)
{
	/*int c = 1, num = 0;
	while (n != 0)
	{
		if (n % 2 == 1)
			num += c;
		c *= 10;
		n /= 2;
	}*/
	/*printf("%d", num);*/
	if (n == 0)
		return;
	else
	{
		tob(n / 2);
		printf("%d", n % 2);
	}
	
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	tob(n);
	return 0;
}
