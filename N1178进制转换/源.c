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
#include<string.h>
int main()
{
	int n=0, length=0;	//length����װ���������ĸ���
	int a[20];		//����һ��������װ��2�õ�������
	while (scanf("%d", &n) != EOF)//����ʮ���Ƶ�����
	{
		while (n / 2)
		{		//��n=1ʱ��n/2=0����ʱwhile(0)��ִ��while�е���䣬ֱ��ִ����������
			a[length++] = n % 2;	//����2�õ�������װ��������
			n = n / 2;			//����
		}
		a[length++] = n % 2;		//�洢���һ������
		for (int i = length - 1; i >= 0; i--)
		{
			printf("%d", a[i]);//�����������������
		}
		length = 0;//�ÿո���
		memset(a, NULL, sizeof(a));//�ÿ�����
	}
	return 0;
}
