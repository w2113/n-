#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main()
{
	int n = 0;
	char arr[14] = { 0 };
	scanf("%d", &n);
	int i = 0;
	int k = 0;
	while (n)
	{
		if (k != 0 && k % 3 == 0)//ÿ��������һ������
		{
			arr[i++] = ',';
		}
		arr[i++] = n % 10+'0';//ģʮ��ʮȡ��ÿһλ����arr����+��0��ת�ַ���
		n /= 10;
		k++;//����
	}
	for (--i; i >= 0; i--)//�Ӻ���ǰ��ӡ
	{
		printf("%c", arr[i]);
	}
	return 0;
}