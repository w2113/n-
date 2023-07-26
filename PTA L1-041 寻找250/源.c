
#pragma warning(disable:6031)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int n = 0, num = 0;
	while (1)
	{
		scanf("%d", &n);
		num++;
		if (n == 250)
		{
			printf("%d", num);
			break;
		}
	}
	return 0;
}
