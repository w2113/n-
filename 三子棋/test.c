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
		printf("���Ӯ\n");
	}
	if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	if (ret == 'q')
	{
		printf("ƽ��\n");
	}
	disboard(board, row, col);
}
void menu()
{
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}