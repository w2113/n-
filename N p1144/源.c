#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
struct worker
{
	int id;
	char name[20];
	float wage;
}w[10];
int main()
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("please input %dth worker id,name,wage\n",i+1);
		scanf("%d %s %f", &w[i].id, &w[i].name, &w[i].wage);
	}
	int min = 0;
	for (i = 0; i < 10; i++)
	{
		if (w[i].wage < w[min].wage)
			min = i;
	}
	printf("%s", w[min].name);
}