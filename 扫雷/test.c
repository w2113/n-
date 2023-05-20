#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include "game.h"

void menu()
{
	printf("*********************************\n");
	printf("**********    1. play   *********\n");
	printf("**********    0. exit   *********\n");
	printf("*********************************\n");
}

void game()
{
	char mine[ROWS][COLS]; // 存放雷的信息
	char show[ROWS][COLS]; // 存放排查出的雷的信息
	// 将两个数组设定的一样大，是为了将两个数组一一对应

	// 初始化棋盘
	InitBoard(mine, ROWS, COLS, '0'); // 初始化为'0'
	InitBoard(show, ROWS, COLS, ' '); // 初始化为' '  -- 空格

	// 打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//  布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	// 排查雷
	FindMine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
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
			printf("选择错误,请重新选择：>\n");
			break;
		}
	} while (input);
	return 0;
}
