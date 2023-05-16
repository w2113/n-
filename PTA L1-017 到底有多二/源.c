#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
	int d = 0, e;
	double b;
	char c[100];
	gets(c);
	e = strlen(c);
	for (int g = 0; g < e; g++)
	{
		if (c[g] == '2')
		{
			d++;
		}
	}
	if (c[0] == '-')
	{
		b = d * 1.0 / (e - 1) * 1.5;
	}
	else
		b = d * 1.0 / e;
	if (c[e - 1] % 2 == 0)
	{
		b *= 2.0;
	}
	printf("%.2lf%%", b * 100);


}
