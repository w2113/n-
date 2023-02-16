#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
typedef struct student
{
	int id;
	int score;
}stu;
void fun(stu s[], int n)
{
	int j = 0,i=0;
	stu t = { 0,0 };
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (s[j].score > s[j + 1].score)
			{
				t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
			}
		}
	}
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1 - i; j++)
		{
			if (s[j].score == s[j + 1].score && s[j].id > s[j + 1].id)
			{
				t = s[j];
				s[j] = s[j + 1];
				s[j + 1] = t;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d %d\n", s[i].id, s[i].score);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int i = n;
	stu s[100];
	for(i=0;i<n;i++)
	{
		scanf("%d %d", &s[i].id, &s[i].score);
	}
	fun(s, n);
	return 0;
}