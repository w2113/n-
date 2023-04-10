#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	int cnt = 0;
	while (num != 1)
	{
		cnt++;
		if (num % 2)
			num = (3 * num + 1) / 2;
		else
			num = num / 2;
	}
	printf("%d\n", cnt);
	return 0;
}