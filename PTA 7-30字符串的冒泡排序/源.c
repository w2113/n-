#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>

char str[101][11];

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for (int i = 1; i <= k; i++)
    {//ð�������һ���ǱȽϴ�����һ����n-1��
        for (int j = 0; j <= n - 1 - i; j++)
        {//�ڶ����Ǵ�0��ʼ��С�ڵ���n-1-i
            if (strcmp(str[j], str[j + 1]) > 0)
            {
                char temp[11];
                strcpy(temp, str[j]);//��һ��Ԫ�ظ���ǰһ��
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
    return 0;
}