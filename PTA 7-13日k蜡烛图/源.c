#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	double open = 0, close = 0, high = 0, low = 0;
	scanf("%lf %lf %lf %lf", &open, &high, &low, &close);

	if (close < open)
		printf("BW-Solid");
	else if (close > open)
		printf("R-Hollow");
	else
		printf("R-Cross");


	if ((low < open && low < close) && (high > open && high > close))
		printf(" with Lower Shadow and Upper Shadow");
	else if (low < open && low < close)
		printf(" with Lower Shadow");
	else if (high > open && high > close)
		printf(" with Upper Shadow");

	return 0;
}