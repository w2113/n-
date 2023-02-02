#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
//从键盘输入一个字符串（可能含有数字、字母、其他可见字符），
//输出出现频率最高的英文字母及次数，
//忽略字母的大小写（如大写A和小写a均视为a）
//输入：There are 10, 000 soldiers in the town.
//输入：e 5
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000] = { 0 };
	char map[128] = { 0 };//构造辅助数组
	gets(str);
	int count = 0;
	int i = 0;
	int sz = strlen(str);
	for (i = 0; i < sz; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;//大写转小写
			map[str[i]]++;//以字母的ASCII码值为下标放入辅助数组中
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
		if (max < map[i])//比较辅助数组找到max
		{
			max = map[i];
			s = i;//下标变为字符；
		}
	}
	printf("%c %d", s, max);
	return 0;
}