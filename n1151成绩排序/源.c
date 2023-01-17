#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<stdlib.h>
typedef struct score
{
	char name[12];
	int sc;
}score;
int cmp(const void* a, const void* b)
{
	score* left = (score*)a;
	score* right = (score*)b;
	return left->sc - right->sc;
}
int cmp1(const void* a, const void* b)
{
	score* left = (score*)a;
	score* right = (score*)b;
	return right->sc - left->sc;
}
int main()
{
	int n = 0;
	int way = 0;
	int i = 0;
	
	while (scanf("%d", &n) != EOF)
	{
		score stu[] = {0,0};
		scanf("%d", &way);
		for (i = 0; i < n; i++)
		{
			scanf("%s %d", stu[i].name, &(stu[i].sc));
		}
		if (way)
		{
			qsort(stu, n, sizeof(stu), cmp);
			for (i = 0; i < n; i++)
			{
				printf("%s %d\n", stu[i].name, stu[i].sc);
			}
		}
		else
		{
			qsort(stu, n, sizeof(stu), cmp1);
			for (i = 0; i < n; i++)
			{
				printf("%s %d\n", stu[i].name, stu[i].sc);
			}
		}
	}
	return 0;
}