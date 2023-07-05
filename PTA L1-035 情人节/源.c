#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	char s[10000][11];
	int index;
	for (index = 0;; index++)
	{
		scanf("%s", s[index]);
		if (s[index][0] == '.')
			break;
	}
	if (index < 2)
		printf("Momo... No one is for you ...");
	else if (index < 14)
		printf("%s is the only one for you...", s[1]);
	else
		printf("%s and %s are inviting you to dinner...", s[1], s[13]);

	return 0;
}
