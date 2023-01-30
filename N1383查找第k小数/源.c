#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//#include<stdio.h>
////#include<stdlib.h>
////int cmp(const void*a,const void*b)
////{
////	int arg1 = *(const int*)a;
////	int arg2 = *(const int*)b;
////
////	if (arg1 < arg2) return -1;
////	if (arg1 > arg2) return 1;
////	return 0;
////}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int k = 0;
//	int i = 0;
//	int num = 0;
//	int arr[1001] = {0};
//		scanf("%d", &n);
//		for (i = 0; i < n; i++)
//		{
//			scanf("%d", &m);
//			arr[i] = m;
//		}
//		scanf("%d", &k);
//		for (i = 1; i < 1001; i++)
//		{
//			if (arr[i] != 0)
//			{
//				num++;
//				if (num == k)
//				{
//					printf("%d", i);
//					break;
//				}
//			}
//		}
//		/*int sz = sizeof(arr) / sizeof(arr[0]);
//		qsort(arr, sz, sizeof(int), cmp);
//		for (i = 0; i <= n; i++)
//		{
//			printf("%d ", arr[i]);
//		}*/
//	return 0;
//}
#include<stdio.h>

int main()
{
	int n;
	int k;
	scanf("%d", &n);
	int a[1001] = { 0 };
	int m;
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &m);
		a[m] += 1;
	}
	scanf("%d", &k);
	int count = 0;
	for (int i = 1; i < 1001; i++)
	{
		if (a[i] != 0)
		{
			count++;
			if (count == k)
			{
				printf("%d", i);
				break;
			}
		}
	}

}