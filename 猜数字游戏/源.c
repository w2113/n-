#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("*****************************\n");
	printf("**********1.��ʼ��Ϸ*********\n");
	printf("**********0.�˳���Ϸ*********\n");
	printf("*****************************\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int n = 0;
	while (1)
	{
		scanf("%d", &n);
		if (n > ret)
		{
			printf("�´���\n");
		}
		else if (n < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}