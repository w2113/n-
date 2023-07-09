#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a, b;
	float x;
	scanf("%d%d", &a, &b);
	x = 1.0 * a / b;
	if (b < 0)
		printf("%d/(%d)=%.2f", a, b, x);
	else if (b == 0)
		printf("%d/%d=Error", a, b);
	else
		printf("%d/%d=%.2f", a, b, x);
	system("pause");
}
