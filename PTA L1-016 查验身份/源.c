#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	char arr[19];
	int a[17] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
	char b[11] = { '1', '0', 'X', '9' ,'8' ,'7' ,'6', '5' ,'4', '3', '2' };
	int N, sum = 0, flag = 0, z;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		sum = 0;
		scanf("%s", arr);
		for (int j = 0; j < 17; j++)
		{
			sum += (arr[j] - '0') * a[j];
		}
		z = sum % 11;
		if (b[z] != arr[17])
		{
			printf("%s\n", arr);
			flag = 1;
		}
	}
	if (!flag)
		printf("All passed");
	return 0;
}
