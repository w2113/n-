#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    while (~scanf("%d", &n))
    {
        for (int i = 0; i < n; i++)
        {
            char pwd[101] = { 0 };
            scanf("%s", pwd);
            int lower = 0, higher = 0, digit = 0, other = 0;
            if (pwd[0] >= '0' && pwd[0] <= '9')
            {
                printf("NO\n");
                continue;
            }//���벻�������ֿ�ͷ
            if (strlen(pwd) < 8)
            {
                printf("NO\n");
                continue;
            }//���볤������Ϊ8
            for (int i = 0; pwd[i] != '\0'; i++)
            {
                if (pwd[i] >= '0' && pwd[i] <= '9')
                    digit++;//����
                else if (pwd[i] >= 'a' && pwd[i] <= 'z')
                    lower++;//Сд��ĸ
                else if (pwd[i] >= 'A' && pwd[i] <= 'Z')
                    higher++;//��д��ĸ
                else
                    other++;
            }
            if (other != 0)
            {
                printf("NO\n");
                continue;
            }// ����ֻ���ɴ�д��ĸ��Сд��ĸ�����ֹ���
          //��д��Сд�����֣���������������ϣ����Ƚ���������1������0
            if ((lower + higher + digit) < 2)
            {
                printf("NO\n");
                continue;
            }//����ֻ��1���ַ�
            printf("YES\n");
        }
    }
    return 0;
}
