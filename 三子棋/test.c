#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include"game.h"
void game()
{
	char board[row][col];
	inboard(board, row, col);
	disboard(board, row, col);
	char ret = 0;
	while (1)
	{
		playermove(board,row,col);
		ret=iswin(board, row, col);
		if (ret != 'c')
		{
			break;
		}
		disboard(board, row, col);
		cmove(board, row, col);
		ret = iswin(board, row, col);
		if (ret != 'c')
		{
			break;
		}
		disboard(board, row, col);
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	if (ret == '#')
	{
		printf("电脑赢\n");
	}
	if (ret == 'q')
	{
		printf("平局\n");
	}
	disboard(board, row, col);
}
void menu()
{
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}