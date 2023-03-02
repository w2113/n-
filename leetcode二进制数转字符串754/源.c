#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<malloc.h>
#include<assert.h>
char* printBin(double num)
{
    char* res = (char*)calloc(sizeof(char), 33);
    assert(res);
    int pos = 0;
    pos += sprintf(res, "%s", "0.");
    while (pos <= 32 && num != 0) 
    {
        num *= 2;
        int digit = num;//将小数点前的值保存
        res[pos++] = digit + '0';
        num -= digit;
    }
    if (pos > 32) 
    {
        free(res);
        return "ERROR";
    }
    return res;
}
int main()
{
    char* s = printBin(0.625);
    printf("%s",s);
	return 0;
}