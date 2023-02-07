#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void menu()
{
	printf("*****************************\n");
	printf("**********1.开始游戏*********\n");
	printf("**********0.退出游戏*********\n");
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
			printf("猜大了\n");
		}
		else if (n < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
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
			printf("游戏开始\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}