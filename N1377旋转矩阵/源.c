#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
int main() {
    int a[10][10] = { 0 };
    int b[10][10] = { 0 };
    int n = 0, result = 0;
    while (~scanf("%d", &n)) {   //�洢������
        int x0 = 0, x90 = 0, x180 = 0, x270 = 0;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 0; i < n; i++) 
        {              //��������ȶԵ�
            for (int j = 0; j < n; j++) 
            {
                scanf("%d", &b[i][j]);
            }
        }

        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (a[i][j] == b[i][j]) x0++;      //��ת0��
                if (a[i][j] == b[j][2 - i]) x90++;  //��ת90��
                if (a[i][j] == b[2 - i][2 - j]) x180++; //��ת180��
                if (a[i][j] == b[2 - j][i])  x270++;     //��ת270��
            }
        }
        if (x270 == n * n) result = 270;
        if (x180 == n * n) result = 180;
        if (x90 == n * n)  result = 90;
        if (x0 == n * n)  result = 0;
        if (x0 != n * n && x90 != n * n && x180 != n * n && x270 != n * n) result = -1;
        printf("%d\n", result);
    }
    return 0;
}