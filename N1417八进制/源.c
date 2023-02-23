#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	int n = 0;
	int a[100];
	
	while (scanf("%d", &n) != EOF)
	{
		int rem = 0, i = 0;
		while (n > 0)
		{
			rem = n % 8;
			a[i++] = rem;
			n /= 8;
		}
		i--;
		while (i >= 0)
		{
			printf("%d", a[i--]);
		}
		printf("\n");
	}
	return 0;
}