#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int arr[51] = { 0 };
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d ", &arr[i]);
	}
	int m = 0;
	scanf("%d", &m);
	for (i = n - 1; i >= 0; i--)
	{
		if (arr[i] > m)
			arr[i + 1] = arr[i];
		else
		{
			break;
		}
	}
	arr[i + 1] = m;
	for (i = 0; i < n + 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}