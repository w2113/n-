#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include"contact.h"
//实现一个通讯录；
//通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//提供方法：
//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人

void menu()
{
    printf("---------------------------------------\n");
    printf("------    1.ADD        2.DEL     ------\n");
    printf("------    3.FIND       4.MODIFY  ------\n");
    printf("------    5.SHOW       6.EMPTY   ------\n");
    printf("------    7.SORT       0.EXIT    ------\n");
    printf("---------------------------------------\n");
}
enum Options
{
    EXIT,ADD,DEL,FIND,MODIFY,SHOW,EMPTY,SORT
};
int main()
{
    int input = 0;
    Contact con;
    init_contact(&con);
    do
    {
        menu();
        printf("请选择\n");
        scanf("%d", &input);
        switch (input)
        {
        case ADD:
            add_contact(&con);
            break;
        case DEL:
            del_contact(&con);
            break;
        case FIND:
            find_contact(&con);
            break;
        case MODIFY:
            modify_contact(&con);
            break;
        case SHOW:
            show_contact(&con);
            break;
        case EMPTY:
            empty_contact(&con);
            break;
        case SORT:
            sort_contact(&con);
            show_contact(&con);
            break;
        case EXIT:
            break;
        default:
            printf("输入错误，请重新输入\n");
            break;
        }
    } while (input);
    return 0;
}