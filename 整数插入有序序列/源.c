#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void func(int* x, int n, int k)
{
	int* p;
	for (p = x+n-1; p >= x; p--)
	{
		if (*p > k)
			*(p + 1) = *p;
		else
			break;
	}
	*(p+1) = k;
}
int main()
{
	int n = 9;
	int k = 50;
	int a[10] = { 22,33,44,55,66,70,77,88,99 };
	func(a, n, k);
	return 0;
}