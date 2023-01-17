#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int num = 0;
	int n = 0;
	int c = 1;
	while (scanf("%d", &num) != EOF)
	{
		while (num != 0)
		{
			if (num % 2 == 1)	
				n += c;
				c *= 10;
				num /= 2;
		}
		printf("%d\n", n);
	}
	return 0;
}