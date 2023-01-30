#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int input = 0;
	scanf("%d", &input);
	switch (input/10)
	{
	case 5:
		printf("E");
		break;
	case 6:
		printf("D");
		break;
	case 7:
		printf("C");
		break;
	case 8:
		printf("B");
		break;
	default:
		printf("A");
		break;
	}
	return 0;
}