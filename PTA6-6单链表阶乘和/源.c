#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
int FactorialSum(List L)
{
    int i, s = 1, ss = 0;
    while (L != NULL)
    {
        for (i = L->Data; i > 0; i--)
        {
            s *= i;
        }
        ss += s;
        L = L->Next;
        s = 1;
    }
    return ss;
}