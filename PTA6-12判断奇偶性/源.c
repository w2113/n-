#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
int even(int n)
{
    if (n == 0)
        return 1;
    else if (n % 2 == 0)
        return 1;
    else
        return 0;
}