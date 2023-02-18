#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int n, m;
	scanf("%d", &n);
	int a[101], b[101];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < m; i++)
	{
		int flag = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[j] == b[i])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}

	return 0;
}