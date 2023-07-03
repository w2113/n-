#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int m[1000] = { 0 }, a, b, c, d, e = 999, N, n;
	scanf("%d", &N);
	for (a = 0; a < N; a++)
	{
		scanf("%d", &n);
		for (b = 0; b < n; b++)
		{
			scanf("%d", &c);
			m[c - 1]++;
		}
	}
	for (d = 999; d > 0; d--)
		if (m[e] < m[d - 1])
			e = d - 1;
	printf("%d %d", e + 1, m[e]);
	return 0;
}
