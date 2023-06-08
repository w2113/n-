#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int a[100000] = { 0 };
	int b[100000] = { 0 };
	int n = 0;
	scanf("%d", &n);
	int count = 0, id = 0, sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &count);
		for (int j = 0; j < count; j++)
		{
			scanf("%d", &id);
			if (count > 1)
				a[id] = 1;
		}
	}
	int m = 0;
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &id);
		if (a[id] == 0)
		{
			if (b[id] == 0 && sum == 0)
				printf("%05d", id);
			else if (b[id] == 0 && sum > 0)
				printf(" %05d", id);
			b[id] = 1;
			a[id] = 1;
			sum++;
		}
	}
	if (sum == 0)
		printf("No one is handsome");
	return 0;
}