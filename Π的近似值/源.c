#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main()
{
	int f;
	float n;
	float t, pi;
	t = 1; pi = t; f = 1; n = 1.0;
	while (1 / n >= 1e-6)
	{
		n = n + 2;
		f *= -1;
		t = f / n;
		pi = pi + t;
	}
	pi *= 4;
	printf("%10.6f", pi);
	return 0;
}