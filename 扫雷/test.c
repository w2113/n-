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
	char mine[ROWS][COLS]; // ����׵���Ϣ
	char show[ROWS][COLS]; // ����Ų�����׵���Ϣ
	// �����������趨��һ������Ϊ�˽���������һһ��Ӧ

	// ��ʼ������
	InitBoard(mine, ROWS, COLS, '0'); // ��ʼ��Ϊ'0'
	InitBoard(show, ROWS, COLS, ' '); // ��ʼ��Ϊ' '  -- �ո�

	// ��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//  ������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);

	// �Ų���
	FindMine(mine, show, ROW, COL);

}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
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
			printf("ѡ�����,������ѡ��>\n");
			break;
		}
	} while (input);
	return 0;
}
