#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//�Ӽ�������һ���ַ��������ܺ������֡���ĸ�������ɼ��ַ�����
//�������Ƶ����ߵ�Ӣ����ĸ��������
//������ĸ�Ĵ�Сд�����дA��Сдa����Ϊa��
//���룺There are 10, 000 soldiers in the town.
//���룺e 5
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000] = { 0 };
	char map[128] = { 0 };//���츨������
	gets(str);
	int count = 0;
	int i = 0;
	int sz = strlen(str);
	for (i = 0; i < sz; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;//��дתСд
			map[str[i]]++;//����ĸ��ASCII��ֵΪ�±���븨��������
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			map[str[i]]++;
		}
	}
	int max = 0;
	char s = 0;
	for (i = 97; i < 123; i++)
	{
		if (max < map[i])//�Ƚϸ��������ҵ�max
		{
			max = map[i];
			s = i;//�±��Ϊ�ַ���
		}
	}
	printf("%c %d", s, max);
	return 0;
}