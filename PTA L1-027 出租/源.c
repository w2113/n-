#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int arr[12] = { 0 }, index[11] = { 0 }, number[11] = { 0 };
	int i = 0, j = 0, flag = 0, max = 0;
	char ch = 0;
	for (i = 0; i < 11; i++)
	{
		scanf("%c", &ch);
		number[i] = (int)(ch - '0');
	}
	for (i = 0; i < 11; i++)
	{
		if (max < number[i])
			max = number[i];
	}
	flag = max;
	arr[0] = max;
	for (i = 0; i < 11; i++)
	{
		max = -2;
		for (j = 0; j < 11; j++)
		{
			if (number[j] > max && number[j] < flag)
				max = number[j];
		}
		arr[i + 1] = max;
		flag = max;
	}
	printf("int[] arr = new int[]{");
	printf("%d", arr[0]);
	for (i = 1; i < 11; i++)
	{
		if (arr[i] != -2)
		{
			printf(",%d", arr[i]);
		}
	}
	printf("};\n");
	printf("int[] index = new int[]{");
	for (j = 0; j < 11; j++)
	{
		if (number[0] == arr[j])
			printf("%d", j);
	}
	for (i = 1; i < 11; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (number[i] == arr[j])
				printf(",%d", j);
		}
	}
	printf("};");
	return 0;
}