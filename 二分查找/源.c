#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int flag = 0;
	while (left<=right)
	{
		int mid = left + (right-left) / 2;
		if (arr[mid] > k)//降序为>  升序为<
		{
			left = mid + 1;
		}
		else if (arr[mid] < k)
		{
			right = mid - 1;
		}
		else
		{
			printf("%d", mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		printf("找不到\n");
	}
	return 0;
}