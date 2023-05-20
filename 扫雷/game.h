#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

# define EASY_COUNT 10

// 初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

// 打印棋盘
// 虽然没有打印最外边一圈的元素，但是传参的时候传的是mine数组还是要传11*11的
void DisplayBoard(char board[ROWS][COLS], int row, int col);

// 布置雷
void SetMine(char board[ROWS][COLS], int row, int col);

// 排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
