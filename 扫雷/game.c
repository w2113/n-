#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	for (i = 1; i <= row; i++)
	{
		if (i == 1)
			printf("    %d  ", i);
		else
			printf(" %d  ", i);
	}
	printf("\n");
	for (i = 0; i <= row; i++)
	{
		if (i == 0)
			printf("  ");
		else
			printf("----");
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d |", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c |", board[i][j]);
		}
		printf("\n");
		int m = 0;
		for (m = 0; m <= row; m++)
		{
			if (m == 0)
				printf("  ");
			else
				printf("----");
		}
		printf("\n");
	}
}

void SetMine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		// 1. ��������±�
		int x = rand() % row + 1;
		int y = rand() % col + 1;

		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	// �������������Ŀ = �������� - ��������ѭ������ 
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������:>");

		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, ROW, COL);

				win++;

			}
		}
		else
		{
			printf("����Ƿ�������������\n");
		}
	}

	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�����׳ɹ�!!\n");
		DisplayBoard(mine, ROW, COL);

	}
}
