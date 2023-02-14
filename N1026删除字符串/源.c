#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main() {
	char str[100], str1[100];
	gets(str);
	int len = strlen(str), k = 0;
	for (int i = 0; i < len; i++) {
		if (str[i] == 'g' && str[i + 1] == 'z' && str[i + 2] == 'u') {
			i += 2;
		}
		else {
			str1[k++] = str[i];
		}
	}
	str1[k] = '\0';
	printf("%s", str1);
	return 0;
}