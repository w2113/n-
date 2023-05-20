#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int sum = 0;
	int score = 0;
	int i = 0;
	int max = 0;
	int min = 0;
	for (i = 0; i < 7; i++)
	{
		scanf("%d", &score);
		sum += score;
		if (score > max)
			max = score;
		if (score < min)
			min = score;
	}
	printf("%.2f\n", (sum - min - max) / 5.0);
	return 0;
}