#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
typedef struct data
{
	float a;
	float b;
	float c;
	float d;
	float ave;
}data;
typedef struct city
{
	char name[20];
	data;
}city;
int cmp(const void* e1, const void* e2)
{
	return (*(city*)e1).ave > (*(city*)e2).ave ? 1 : -1;
}
int main()
{
	city w[10];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%s", &w[i].name);
		scanf("%f %f %f %f", &w[i].a, &w[i].b, &w[i].c, &w[i].d);
		w[i].ave = (w[i].a + w[i].b + w[i].c + w[i].d) / 4;
	}
	qsort(w, 10, sizeof(w[0]), cmp);
	for (i = 0; i < 10; i++)
	{
		printf("%s ", w[i].name);
		printf("%f %f %f %f ", w[i].a, w[i].b, w[i].c, w[i].d);
		printf("%f\n", w[i].ave);
	}
	return 0;
}