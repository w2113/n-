#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int t = 1;
//	int j = 0;
//	int mark = 0;
//	int arr[32] = { 0 };
//	while (scanf("%d", &n) != EOF)
//	{
//		int flag = 1;
//		int i = 0;
//		for (i = 0; flag; i++)
//		{
//			if (n & flag)
//			{
//				arr[i] = 1;
//			}
//			else
//			{
//				arr[i] = 0;
//			}
//			flag = flag << 1;
//		}
//		for (i = 31; i >= 0; i--)
//		{
//			printf("%d", arr[i]);
//		}
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	int n = 0, length = 0;	//length����װ���������ĸ���
//	int a[100];		//����һ��������װ��2�õ�������
//	while (scanf("%d", &n) != EOF)//����ʮ���Ƶ�����
//	{
//		while (n / 2)
//		{		//��n=1ʱ��n/2=0����ʱwhile(0)��ִ��while�е���䣬ֱ��ִ����������
//			a[length++] = n % 2;	//����2�õ�������װ��������
//			n = n / 2;			//����
//		}
//		a[length++] = n % 2;		//�洢���һ������
//		for (int i = length - 1; i >= 0; i--)
//		{
//			printf("%d", a[i]);//�����������������
//		}
//		printf("\n");
//		length = 0;//�ÿո���
//		memset(a, NULL, sizeof(a));//�ÿ�����
//	}
//	return 0;
//}
#include <stdio.h>
#include <string.h>
//��һ���������Ϊ30λ���ֵ�ʮ���ƷǸ�����ת��Ϊ�����������
//����ת��������
char s[40], buf[200];
int main() {
    int num[40];
    while (scanf("%s", s) != EOF) {
        int len = strlen(s);
        for (int i = 0; i < len; i++) {
            num[i] = s[i] - '0';
        }
        int i = 0, len_str = 0;
        while (i < len) {
            buf[len_str++] = num[len - 1] % 2 + '0';
            int c = 0;
            for (int j = i; j < len; j++) {
                int tmp = num[j];
                num[j] = (num[j] + c) / 2;
                if (tmp % 2 == 1) {
                    c = 10;
                }
                else c = 0;
            }
            if (num[i] == 0) i++;
        }
        for (int j = len_str - 1; j >= 0; j--) {
            printf("%c", buf[j]);
        }
        printf("\n");
    }
    return 0;
}
