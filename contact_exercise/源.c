#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include"contact.h"
//ʵ��һ��ͨѶ¼��
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//�ṩ������
//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��

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
        printf("��ѡ��\n");
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
            printf("�����������������\n");
            break;
        }
    } while (input);
    return 0;
}