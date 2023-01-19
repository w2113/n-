#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
	int a=20, b=40, c=0;
	if (a < b)
	{
		c = a;
		a = b;
		b = c;                      //确保a≥b
	}
	while (b != 0)
	{
		c = b;
		b = a % b;                    //辗转相除
		a = c;
	}
	printf("%d\n", a);
	return 0;
}
