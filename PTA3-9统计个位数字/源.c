#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
int Count_Digit(const int N, const int D)
{
    int n = N, count = 0, flag = -1;
    if (n == 0)
        return 1;
    if (n < 0)
    {
        n *= flag;
    }
    while (n)
    {
        if (n % 10 == D)
        {
            count++;
        }
        n /= 10;
    }
    return count;
}