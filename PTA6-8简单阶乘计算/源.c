#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
int Factorial(const int N)
{
    int sum = 1, n = N;
    if (N < 0)
    {
        return 0;
    }
    else
    {
        while (n)
        {
            sum *= n;
            n--;
        }
        return sum;
    }

}