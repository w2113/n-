#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include"contact.h"
void menu()//�˵�
{
	printf("***********************************\n");
	printf("*****1.add**********2.del**********\n");
	printf("*****3.search*******4.modify*******\n");
	printf("*****5.sort*********6.print********\n");
	printf("**************0.exit***************\n");
	printf("***********************************\n");
}
enum option//ö��ѡ��
{
	exitt,add,del,search,modify,sort,print
};
int main()
{
	int input = 0;
	contact con;//����ͨѶ¼
	initcontact(&con);//��ʼ��������
	 do
	{
		menu();
		printf("��ѡ��:\n");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			addcontact(&con);//����
			break;
		case del:
			delcontact(&con);//ɾ��
			break;
		case search:
			searchcontact(&con);//����
			break;
		case modify:
			modifycontact(&con);//�޸�
			break;
		case sort:
			sortcontact(&con);//����
			break;//����
		case print:
			printcontact(&con);//��ӡ
			break;
		case exitt:
			savecontact(&con);//�ȱ���
			destorycontact(&con);//����
			printf("�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}