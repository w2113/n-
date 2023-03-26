#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
void find_digit(int* arr, int sz, int* px, int* py) {
	//1.Ҫ�������������
	int i = 0;
	int ret = 0;
	int pos = 0;
	for (i = 0; i < sz; i++) {
		ret ^= *(arr + i);
	}
	//2.����ret��һλΪ1
	for (i = 0; i < 32; i++) {
		if ((ret >> i) & 1 == 1) {//��������
			pos = i;
			break;
		}
	}
	//�Ѵӵ�λ��ߵĵ�posλΪ1�ķ���һ���飬Ϊ0�ķ�������һ����
	int num1 = 0;
	int num2 = 0;
	for (i = 0; i < sz; i++) {
		if (((*(arr + i) >> pos) & 1) == 1) {
			num1 ^= arr[i];
		}
		else {
			num2 ^= arr[i];
		}
	}
	*px = num1;
	*py = num2;
}
int main() {
	int arr[] = { 1,2,3,4,4,4,1,9,2,10,3,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int x = 0;
	int y = 0;
	//���з���
	//Ҫ�㣺5��6�����ڲ�ͬ����
	//�ҳ�������ֻ����һ�ε�����
	find_digit(arr, sz, &x, &y);
	printf("%d %d\n", x, y);
	return 0;
}
