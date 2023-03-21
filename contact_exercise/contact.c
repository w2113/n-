#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include"contact.h"
void init_contact(Contact*p)
{
	p->sz = 0;
	memset(p->data, 0, sizeof(p->data));
}
void add_contact(Contact* p)
{
	if (p->sz == MAX-1)
	{
		printf("ͨѶ¼����\n");
	}
	printf("����������: ");
	scanf("%s", p->data[p->sz].name);
	printf("�������Ա�: ");
	scanf("%s", p->data[p->sz].sex);
	printf("����������: ");
	scanf("%d", &(p->data[p->sz].age));
	printf("������绰: ");
	scanf("%s", p->data[p->sz].tel);
	printf("�������ַ: ");
	scanf("%s", p->data[p->sz].address);
	p->sz++;
	printf("���ӳɹ�\n");
}
void show_contact(const Contact*p)
{
	int i = 0;
	printf("%-15s\t%-10s\t%-10s\t%-20s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < p->sz; i++)
	{
		printf("%-15s\t%-10s\t%-10d\t%-20s\t%-20s\n",
			p->data[i].name,
			p->data[i].sex,
			p->data[i].age,
			p->data[i].tel,
			p->data[i].address);
	}
}
static int find_name(const Contact* p,char name[])
{
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}
void del_contact(Contact* p)
{
	if (p->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	char name[max_name];
	printf("������Ҫɾ���˵�����\n");
	scanf("%s", name);
	int pos = find_name(p, name);
	if (pos < 0)
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		for (int i = pos; i < p->sz - 1; i++)
		{
			p->data[i] = p->data[i + 1];
		}
		p->sz--;
		printf("ɾ���ɹ�\n");
	}
}
void find_contact(const Contact* p)
{
	char name[max_name];
	printf("��������ҵ�����\n");
	scanf("%s", name);
	int pos = find_name(p, name);
	if (pos < 0 )
	{
		printf("��ϵ�˲�����\n");
	}
	else
	{
		printf("%-15s\t%-10s\t%-10s\t%-20s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-15s\t%-10s\t%-10d\t%-20s\t%-20s\n",
			p->data[pos].name,
			p->data[pos].sex,
			p->data[pos].age,
			p->data[pos].tel,
			p->data[pos].address);
	}
}
void modify_contact(Contact* p)
{
	char name[max_name];
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", name);
	int pos = find_name(p, name);
	printf("����������: ");
	scanf("%s", p->data[pos].name);
	printf("�������Ա�: ");
	scanf("%s", p->data[pos].sex);
	printf("����������: ");
	scanf("%d", &(p->data[pos].age));
	printf("������绰: ");
	scanf("%s", p->data[pos].tel);
	printf("�������ַ: ");
	scanf("%s", p->data[pos].address);
}
int cmp(const char* e1, const char* e2)
{
	return strcmp(((Data*)e1)->name, ((Data*)e2)->name);
}
void sort_contact(Contact* p)
{
	qsort(p->data, p->sz, sizeof(Data), cmp);
}
void empty_contact(Contact* p)
{
	memset(p->data, 0, sizeof(p->data));
	p->sz = 0;
}