#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
typedef struct contact
{
    char name[11];
    char birthday[20];
    char sex;
    char tel[17];
    char mob[17];
}contact;
int main()
{
    int n = 0, i = 0, k = 0, id = 0;
    scanf("%d", &n);
    contact con[n];
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %c %s %s", con[i].name, con[i].birthday, &con[i].sex, con[i].tel, con[i].mob);
    }
    scanf("%d", &k);
    for (i = 0; i < k; i++)
    {
        scanf("%d", &id);
        if (id >= 0 && id < n)
        {

            printf("%s %s %s %c %s\n", con[id].name,
                con[id].tel,
                con[id].mob,
                con[id].sex,
                con[id].birthday);
        }
        else
        {
            printf("Not Found\n");
        }
    }
    return 0;
}