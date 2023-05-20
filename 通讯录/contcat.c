#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include"contact.h"
//void initcontact(contact* p)//��̬�汾
//{
//	p->sz = 0;
//	memset(p->data, 0, sizeof(p->data));
//}
void initcontact(contact* p)//��̬�汾
{
	p->data = (peoinfo*)malloc(default_sz * sizeof(peoinfo));
	if (p->data == NULL)
	{
		perror("initcontact");
		return;
	}
	p->sz = 0;
	p->capacity = default_sz;
	
	//�����ļ�
	loadcontact(p);
}
//void addcontact(contact* p)//��̬�汾����
//{
//	if (p->sz == maxx)
//	{
//		printf("ͨѶ¼����\n");
//		return ;
//	}
//	printf("����������: ");
//	scanf("%s", p->data[p->sz].name);
//	printf("�������Ա�: ");
//	scanf("%s", p->data[p->sz].sex);
//	printf("����������: ");
//	scanf("%d", &(p->data[p->sz].age));
//	printf("������绰: ");
//	scanf("%s", p->data[p->sz].tele);
//	printf("�������ַ: ");
//	scanf("%s", p->data[p->sz].addr);
//	p->sz++;
//	printf("���ӳɹ�\n");
//}
void checkcapacity(contact* p)//����
{
	if (p->sz == p->capacity)
	{
		peoinfo* ptr = (peoinfo*)realloc(p->data, (p->capacity + inc_sz) * sizeof(peoinfo));
		if (ptr != NULL)
		{
			p->data = ptr;
			p->capacity += inc_sz;
			printf("���ݳɹ�\n");
		}
		else
		{
			perror("addcontact");
			printf("���ʧ��\n");
			return;
		}
	}
}
void addcontact(contact* p)//��̬�汾����
{
	checkcapacity(p);
	printf("����������: ");
	scanf("%s", p->data[p->sz].name);
	printf("�������Ա�: ");
	scanf("%s", p->data[p->sz].sex);
	printf("����������: ");
	scanf("%d", &(p->data[p->sz].age));
	printf("������绰: ");
	scanf("%s", p->data[p->sz].tele);
	printf("�������ַ: ");
	scanf("%s", p->data[p->sz].addr);
	p->sz++;
	printf("���ӳɹ�\n");
}
void destorycontact(contact* p)//����ͨѶ¼
{
	free(p->data);
	p->data = NULL;
	p->sz = 0;
	p->capacity = default_sz;
}
void savecontact(contact* p)//����
{
	FILE*pf=fopen("contact.dat", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		fwrite(p->data + i, sizeof(peoinfo), 1, pf);
	}
	fclose(pf);
	pf == NULL;
}
void loadcontact(contact* p)//����
{
	FILE* pf = fopen("contact.dat", "r");
	if (pf == NULL)
	{
		perror("loadcontact");
		return;
	}
	peoinfo tmp = { 0 };
	while (fread(&tmp, sizeof(peoinfo),1, pf))
	{
		checkcapacity(p);
		p->data[p->sz] = tmp;
		p->sz++;
	}
	fclose(pf);
	pf = NULL;
}
void printcontact(const contact* p)//��ӡ
{
	int i = 0;
	printf("%-15s\t%-10s\t%-10s\t%-20s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
	for (i = 0; i < p->sz; i++)
	{
		printf("%-15s\t%-10s\t%-10d\t%-20s\t%-20s\n",
			p->data[i].name,
			p->data[i].sex,
			p->data[i].age,
			p->data[i].tele,
			p->data[i].addr);
	}
}
static int find_name(contact* p, char name[])//Ѱ�ҷ����±�
{
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			return i;//�����ҵ����±�
		}
	}
	return -1;//�Ҳ���
}
void delcontact(contact* p)//ɾ��
{
	char name[max_name] = { 0 };
	if (p->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	printf("������Ҫɾ������ϵ������:");
	scanf("%s", &name);
	int pos = find_name(p, name);
	if (pos == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	int i = 0;
	for (i = pos; i < p->sz - 1; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->sz--;
	printf("ɾ���ɹ�\n");
}
void searchcontact(contact* p)//����
{
	char name[max_name] = { 0 };
	printf("����Ҫ���ҵ�����\n");
	scanf("%s", &name);
	int pos = find_name(p, name);
	if (pos == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	else
	{
		printf("%-15s\t%-10s\t%-10s\t%-20s\t%-20s\n", "����", "�Ա�", "����", "�绰", "��ַ");
		printf("%-15s\t%-10s\t%-10d\t%-20s\t%-20s\n",
				p->data[pos].name,
				p->data[pos].sex,
				p->data[pos].age,
				p->data[pos].tele,
				p->data[pos].addr);
	}
}
void modifycontact(contact* p)//�޸�
{
	char name[max_name] = { 0 };
	printf("����Ҫ���ҵ�����\n");
	scanf("%s", &name);
	int pos = find_name(p, name);
	if (pos == -1)
	{
		printf("��ϵ�˲�����\n");
		return;
	}
	else
	{
		printf("����������: ");
		scanf("%s", p->data[pos].name);
		printf("�������Ա�: ");
		scanf("%s", p->data[pos].sex);
		printf("����������: ");
		scanf("%d", &(p->data[pos].age));
		printf("������绰: ");
		scanf("%s", p->data[pos].tele);
		printf("�������ַ: ");
		scanf("%s", p->data[pos].addr);
	}
}
void sortcontact(contact* p)//����
{
	if (p->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
			return;
	}
	int i = 0;
	int j = 0;
	int ret = 0;
	int flag = 0;
	peoinfo t = { 0 };
	for (i = 0; i < p->sz - 1; i++)
	{
		for (j = 0; j < p->sz - 1 - j; j++)
		{
			ret = strcmp(p->data[j].name, p->data[j + 1].name);
			if (ret == 1)
			{
				t = p->data[j];
				p->data[j] = p->data[j + 1];
				p->data[j + 1] = t;
				flag = 1;
			}
			if (flag = 0)
			{
				break;
			}
		}
	}
	printf("����ɹ�\n");
}
