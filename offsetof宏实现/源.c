#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
struct s
{
	int a;
	char c;
	double f;
};
#define OFFSETOF(type,name)  ((size_t)&(((type*)0)->name))
int main()
{
	printf("%d\n", OFFSETOF(struct s, a));
	printf("%d\n", OFFSETOF(struct s, c));
	printf("%d\n", OFFSETOF(struct s, f));
	return 0;
}