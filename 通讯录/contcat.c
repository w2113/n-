#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include"contact.h"
//void initcontact(contact* p)//静态版本
//{
//	p->sz = 0;
//	memset(p->data, 0, sizeof(p->data));
//}
void initcontact(contact* p)//动态版本
{
	p->data = (peoinfo*)malloc(default_sz * sizeof(peoinfo));
	if (p->data == NULL)
	{
		perror("initcontact");
		return;
	}
	p->sz = 0;
	p->capacity = default_sz;
	
	//加载文件
	loadcontact(p);
}
//void addcontact(contact* p)//静态版本增加
//{
//	if (p->sz == maxx)
//	{
//		printf("通讯录已满\n");
//		return ;
//	}
//	printf("请输入名字: ");
//	scanf("%s", p->data[p->sz].name);
//	printf("请输入性别: ");
//	scanf("%s", p->data[p->sz].sex);
//	printf("请输入年龄: ");
//	scanf("%d", &(p->data[p->sz].age));
//	printf("请输入电话: ");
//	scanf("%s", p->data[p->sz].tele);
//	printf("请输入地址: ");
//	scanf("%s", p->data[p->sz].addr);
//	p->sz++;
//	printf("增加成功\n");
//}
void checkcapacity(contact* p)//增容
{
	if (p->sz == p->capacity)
	{
		peoinfo* ptr = (peoinfo*)realloc(p->data, (p->capacity + inc_sz) * sizeof(peoinfo));
		if (ptr != NULL)
		{
			p->data = ptr;
			p->capacity += inc_sz;
			printf("增容成功\n");
		}
		else
		{
			perror("addcontact");
			printf("添加失败\n");
			return;
		}
	}
}
void addcontact(contact* p)//动态版本增加
{
	checkcapacity(p);
	printf("请输入名字: ");
	scanf("%s", p->data[p->sz].name);
	printf("请输入性别: ");
	scanf("%s", p->data[p->sz].sex);
	printf("请输入年龄: ");
	scanf("%d", &(p->data[p->sz].age));
	printf("请输入电话: ");
	scanf("%s", p->data[p->sz].tele);
	printf("请输入地址: ");
	scanf("%s", p->data[p->sz].addr);
	p->sz++;
	printf("增加成功\n");
}
void destorycontact(contact* p)//销毁通讯录
{
	free(p->data);
	p->data = NULL;
	p->sz = 0;
	p->capacity = default_sz;
}
void savecontact(contact* p)//保存
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
void loadcontact(contact* p)//加载
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
void printcontact(const contact* p)//打印
{
	int i = 0;
	printf("%-15s\t%-10s\t%-10s\t%-20s\t%-20s\n", "名字", "性别", "年龄", "电话", "地址");
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
static int find_name(contact* p, char name[])//寻找返回下标
{
	int i = 0;
	for (i = 0; i < p->sz; i++)
	{
		if (strcmp(p->data[i].name, name) == 0)
		{
			return i;//返回找到的下标
		}
	}
	return -1;//找不到
}
void delcontact(contact* p)//删除
{
	char name[max_name] = { 0 };
	if (p->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	printf("请输入要删除的联系人名字:");
	scanf("%s", &name);
	int pos = find_name(p, name);
	if (pos == -1)
	{
		printf("联系人不存在\n");
		return;
	}
	int i = 0;
	for (i = pos; i < p->sz - 1; i++)
	{
		p->data[i] = p->data[i + 1];
	}
	p->sz--;
	printf("删除成功\n");
}
void searchcontact(contact* p)//搜索
{
	char name[max_name] = { 0 };
	printf("请输要查找的名字\n");
	scanf("%s", &name);
	int pos = find_name(p, name);
	if (pos == -1)
	{
		printf("联系人不存在\n");
		return;
	}
	else
	{
		printf("%-15s\t%-10s\t%-10s\t%-20s\t%-20s\n", "名字", "性别", "年龄", "电话", "地址");
		printf("%-15s\t%-10s\t%-10d\t%-20s\t%-20s\n",
				p->data[pos].name,
				p->data[pos].sex,
				p->data[pos].age,
				p->data[pos].tele,
				p->data[pos].addr);
	}
}
void modifycontact(contact* p)//修改
{
	char name[max_name] = { 0 };
	printf("请输要查找的名字\n");
	scanf("%s", &name);
	int pos = find_name(p, name);
	if (pos == -1)
	{
		printf("联系人不存在\n");
		return;
	}
	else
	{
		printf("请输入名字: ");
		scanf("%s", p->data[pos].name);
		printf("请输入性别: ");
		scanf("%s", p->data[pos].sex);
		printf("请输入年龄: ");
		scanf("%d", &(p->data[pos].age));
		printf("请输入电话: ");
		scanf("%s", p->data[pos].tele);
		printf("请输入地址: ");
		scanf("%s", p->data[pos].addr);
	}
}
void sortcontact(contact* p)//排序
{
	if (p->sz == 0)
	{
		printf("通讯录为空\n");
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
	printf("排序成功\n");
}
