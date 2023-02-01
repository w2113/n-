#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
	char tmp[501] = { 0 };
	while (~scanf("%s", tmp)) {
		char t[128] = { 0 }, * p = tmp;
		int count = 0;
		while (*p != '\0') {
			if (t[*p] != 1) {//判断字符ascii值作为下标的位置是否被标记过，是否是重复字符
				count++; //当前字符的位置没有被标记过表示没有出现过，则计数+1
			}
			t[*p++] = 1;//将字符ascii值作为下标的位置进行标记置1
		}
		printf("%d\n", count);
	}
	return 0;
}
//编写一个函数，计算字符串中含有的不同字符的个数。字符在 ASCII 码范围内(0~127 ，包括 0 和 127)，换行
//表示结束符，不算在字符里。不在范围内的不作统计。多个相同的字符只计算一次
//例如，对于字符串 abaca 而言，有 a、b、c 三种不同的字符，因此输出 3 。
//数据范围： 0 <= n <= 500
//输入描述：输入一行没有空格的字符串。
//输出描述：输出 输入字符串 中范围在(0~127，包括0和127)字符的种数。