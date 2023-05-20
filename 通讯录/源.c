#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include"contact.h"
void menu()//菜单
{
	printf("***********************************\n");
	printf("*****1.add**********2.del**********\n");
	printf("*****3.search*******4.modify*******\n");
	printf("*****5.sort*********6.print********\n");
	printf("**************0.exit***************\n");
	printf("***********************************\n");
}
enum option//枚举选项
{
	exitt,add,del,search,modify,sort,print
};
int main()
{
	int input = 0;
	contact con;//创建通讯录
	initcontact(&con);//初始化，加载
	 do
	{
		menu();
		printf("请选择:\n");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			addcontact(&con);//增加
			break;
		case del:
			delcontact(&con);//删除
			break;
		case search:
			searchcontact(&con);//搜索
			break;
		case modify:
			modifycontact(&con);//修改
			break;
		case sort:
			sortcontact(&con);//排序
			break;//排序
		case print:
			printcontact(&con);//打印
			break;
		case exitt:
			savecontact(&con);//先保存
			destorycontact(&con);//销毁
			printf("退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}