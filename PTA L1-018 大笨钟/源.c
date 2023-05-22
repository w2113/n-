#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int hh, mm;
	scanf("%d:%d", &hh, &mm);
	if (hh >= 12)
	{
		if (hh == 12 && mm == 0)
			printf("Only %02d:%02d.  Too early to Dang.", hh, mm);
		if (mm > 0)
		{
			hh++;
		}
		for (int i = 0; i < hh - 12; i++)
			printf("Dang");
	}
	if (hh < 12)
	{
		printf("Only %02d:%02d.  Too early to Dang.", hh, mm);
	}
	return 0;
}
