#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
int IsTheNumber(const int N)
{
    int arr[10] = { 0 };
    int index = 0, n = N;
    if (sqrt(n) == (int)sqrt(n))
    {
        while (n)
        {

            index = n % 10;
            if (arr[index])
                return 1;
            arr[index] = 1;
            n /= 10;
        }
        return 0;
    }
    else
        return 0;
}