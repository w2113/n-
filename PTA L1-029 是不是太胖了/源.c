#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	float  h = 0;
	scanf("%f", &h);
	printf("%.1f", 2 * ((h - 100) * 0.9));
	return 0;
}