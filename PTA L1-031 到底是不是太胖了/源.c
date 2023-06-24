#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		float h, w;
		scanf("%f %f", &h, &w);
		float stan = (h - 100) * 0.9 * 2;
		if (fabs(w - stan) < stan * 0.1)
			printf("You are wan mei!\n");
		else if (stan < w)
			printf("You are tai pang le!\n");
		else
			printf("You are tai shou le!\n");
	}

	return 0;
}
