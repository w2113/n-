#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int x, y, u, v;
	int n, i;
	int a, b, c, d;
	int flag = 0;
	scanf("%d%d", &x, &y);
	scanf("%d", &n);
	u = x, v = y;
	for (i = 0; i < n; i++)
	{
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (u >= 0 && v >= 0)
		{
			if (b == (a + c) && d != (a + c))
			{
				u--;
			}
			if (b != (a + c) && d == (a + c))
			{
				v--;
			}
		}
	}
	if (u < 0)
	{
		printf("A\n");
		printf("%d\n", y - v);
	}
	if (v < 0)
	{
		printf("B\n");
		printf("%d\n", x - u);
	}
	return 0;
}
