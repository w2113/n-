#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
typedef struct student
{
	int age;
	char id[10];
	char name[20];
	char sex[10];
}stu;
int main()
{
	stu s[1000];
	int n = 0, i = 0, m = 0, j = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%s %s %s %d", &s[i].id, &s[i].name, &s[i].sex, &s[i].age);
	}
	scanf("%d", &m);
	char c[100];
	for (i = 0; i < m; i++)
	{
		int flag = 0;
		scanf("%s", c);
		for (j = 0; j < n; j++)
		{
			if (strcmp(c , s[j].id)==0)
			{
				flag = 1;
				printf("%s %s %s %d\n", s[j].id, s[j].name, s[j].sex, s[j].age);
				break;
			}
		}
		if (flag == 0)
			printf("No Answer!\n");
	}
	return 0;
}