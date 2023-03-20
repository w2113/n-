#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int y = 0, n = 0, i = 1;
	while (scanf("%d %d", &y, &n) != EOF)
	{
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
		{
			days[2] = 29;
		}
		else
		{
			days[2] = 28;
		}
		while (n>days[i])
		{
			n -= days[i];
			i++;
		}
		printf("%d-%02d-%02d\n", y, i, n);
		i = 1; n = 0;
	}
	return 0;
}