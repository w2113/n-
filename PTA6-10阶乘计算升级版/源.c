#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
void Print_Factorial(const int N) {
    if (N < 0)
        printf("Invalid input");
    else {
        int num[3000] = { 0 }, j, n = N;    //num��¼����λ�ϵ����֣�ȫ��ʼ��Ϊ0
        num[0] = 1;                   //��λ��ʼ��Ϊ1
        int l = 0;                    //��¼�����λ��
        int carry = 0;                //��λ���λ�Ľ�λ
        for (int i = 2; i <= n; i++) {
            for (j = 0; j <= l; j++) {
                int temp = num[j] * i + carry;
                num[j] = temp % 10;     //��λ����
                carry = temp / 10;      //��λ����
            }
            while (carry) {          //��չ�������λ����¼��λ������ֱ����λΪ0
                num[j++] = carry % 10;  //��λ����
                carry /= 10;          //��λ����
                l++;
            }
        }
        for (; l >= 0; l--)              //���鰴�մӵ�λ����λ�ķ�ʽ�洢���������������
            printf("%d", num[l]);
    }
}
