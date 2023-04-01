#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	char str1[10] = { 0 };
	char str2[100] = { 0 };
	while (gets(str1))
	{
		gets(str2);
		if (str2[0] == '#' || str1[0] == '#')
			return 0;
		int count = 0;
		for (int i = 0; i < strlen(str1); i++) 
		{
			for (int j = 0; j < strlen(str2); j++) 
			{
				if (str1[i] == str2[j])
					count++;
			}
			printf("%c %d\n", str1[i], count);
			count = 0;
		}
	}
	return 0;
}