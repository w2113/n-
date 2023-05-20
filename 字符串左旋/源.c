#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<assert.h>
//void left_rotation(char* str, int k)
//{
//	int i = 0;
//	int len = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;
//	}
//}
void reverse(char* left, char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
void left_rotation(char* str, int k)
{
	assert(str);
	int n = strlen(str);
	reverse(str, str + k - 1);
	reverse(str + k , str + n - 1);
	reverse(str, str + n - 1);
}
int main()
{
	char ar[] = "adsfag";
	int k = 2;
	left_rotation(ar, k);
	printf("%s \n", ar);
	return 0;
}
