#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <math.h>
double a1, b1, a2, b2; 		//ʹ��double������ʹС��֮��ļ�����Ӿ�ȷ
double a3, b3;
void show(char c)
{			//��ӡʽ��
	int tag = 0;
	if (a1 != 0 || b1 != 0) {
		printf("(%0.1lf", a1);
		if (b1 >= 0)
			printf("+");
		printf("%0.1lfi", b1);
		printf(") %c ", c);

	}
	if (a2 != 0 || b2 != 0) {
		printf("(%0.1lf", a2);
		if (b2 >= 0)
			printf("+");
		printf("%0.1lfi", b2);
		printf(")");

	}
	printf(" = ");
	if (fabs(a3) < 0.1 && fabs(b3) < 0.1) {			//����һλС����С���������0.1����
		printf("0.0");
	}
	else {
		if (fabs(a3) > 0.1) {
			printf("%0.1lf", a3);
			tag = 1;
		}
		if (fabs(b3) > 0.1) {
			if (b3 > 0 && tag)
				printf("+");
			printf("%0.1lfi", b3);
		}
	}
}

void add()
{			//�Ӽ��˳�����
	a3 = a1 + a2;
	b3 = b1 + b2;
	show('+');
}

void subtract()
{
	a3 = a1 - a2;
	b3 = b1 - b2;
	show('-');
}
void multiply()
{
	a3 = a1 * a2 - b1 * b2;
	b3 = b1 * a2 + a1 * b2;
	show('*');
}
void divide()
{
	a3 = (a1 * a2 + b1 * b2) / (a2 * a2 + b2 * b2);
	b3 = (b1 * a2 - a1 * b2) / (a2 * a2 + b2 * b2);
	show('/');
}
int main()
{
	scanf("%lf %lf %lf %lf", &a1, &b1, &a2, &b2);
	add();
	printf("\n");
	subtract();
	printf("\n");
	multiply();
	printf("\n");
	divide();
	return 0;
}
