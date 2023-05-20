#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x -y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("************************\n");
	printf("*****1.add****2.sub*****\n");
	printf("*****3.mul****4.div*****\n");
	printf("*********0.exit*********\n");
}
int main()
{
	int input = 0;
	do {
		menu();
		int x = 0;
		int y = 0;
		int ret = 0;
		printf("请选择：\n");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{//函数指针数组  转移表
			int (*parr[5])(int, int) = { NULL,add,sub,mul,div };
			printf("请输入两个操作数：\n");
			scanf("%d %d", &x, &y);
			ret = (parr[input])(x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出程序\n");
			break;
		}
		else
		{
			printf("请重新选择\n");
		}
	} while (input);
	return 0;
}