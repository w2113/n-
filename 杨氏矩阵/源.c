#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int find_num(int arr[3][3], int *r, int *c, int k)
{
	int x = 0;
	int y = *c - 1;
	while (x < *r && y >= 0)
	{
		if (arr[x][y] < k)
		{
			x++;
		}
		else if (arr[x][y] > k)
		{
			y--;
		}
		else
		{
			*r = x;
			*c = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 5;
	int x = 3;
	int y = 3;

	int ret=find_num(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下标为 %d %d\n", x, y);
	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}