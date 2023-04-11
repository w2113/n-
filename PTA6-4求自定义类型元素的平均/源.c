#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
ElementType Average(ElementType S[], int N)
{
    int i = 0;
    ElementType ave = 0;
    for (i = 0; i < N; i++)
    {
        ave += S[i];
    }
    ave /= N;
    return ave;
}