#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
ElementType Max(ElementType S[], int N)
{
    if (N == 1)
        return S[0];
    int i = 0, max = 0;
    for (i = 0; i < N; i++)
    {
        if (S[i] > max)
        {
            max = S[i];
        }
    }
    if (max == 0)
    {
        return S[0];
    }
    return max;
}