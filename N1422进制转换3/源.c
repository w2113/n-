#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>]
#include<string.h>
int main()
{
	int m = 0, n = 0;
	char x[1000] = { 0 };
	scanf("%d %d", &m, &n);
	scanf("%s", &x);
	int len = strlen(x);
	int num = 0;
	int i = 0;
	for (i = 0; i < len; i++)
	{
		if (x[i] >= 0 && x[i] <= '9')
		
			num = num * m + (x[i] - '0');
		
		else
		
			num = num * m + x[i] - 'A' + '10';
		
	}
	char x1[1000] = { 0 };
	i = 0;
	while (num > 0)
	{
		int rem = num % n;
		if (rem >= 0 && rem <= 9)
		
			x1[i++] = rem + '0';
		
		else
		
			x1[i++] = rem - 10 + 'a';
		
		num /= n;
	}
	i--;
	while (i >= 0)
	{
		printf("%c", x1[i--]);
	}
	return 0;
}