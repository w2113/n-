#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
int main()
{
    int n, m, i;
    int book[201] = {0};
    while (scanf("%d%d", &n, &m) != EOF)
    {
        int reader[200];
        for (i = 0; i < 201; i++)
            book[i] = 0;
        if (n >= 2 && m <= 200)
        {
            for (i = 0; i < n; i++)
            {
                scanf("%d", &reader[i]);
                book[reader[i]]++;
            }
            for (i = 0; i < n; i++)
            {
                if (book[reader[i]] == 1)
                    printf("BeiJu\n");
                else
                    printf("%d\n", book[reader[i]]-1 );
            }
        }
    }
    return 0;
}