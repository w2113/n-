#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#define swap(x) (x=((x&0x55555555)<<1)+((x&0xaaaaaaaa)>>1))
int main()
{
	int a = 10;
	printf("%d", swap(a));
	return 0;
}