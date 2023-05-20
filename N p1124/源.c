#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int a[11] = { 1,5,6,7,13,22,27,37,38,45 };
	int i = 0;
	int n = sizeof(a) / sizeof(a[0]);
	int m = 0;
	scanf("%d", &m);
	for (i = n - 2; i >= 0; i--)
	{
		if (a[i] > m)
			a[i + 1] = a[i];
		else
		{
			break;
		}
	}
	a[i + 1] = m;
	for (i = 0; i < n ; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}