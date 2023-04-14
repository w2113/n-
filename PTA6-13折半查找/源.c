#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
int  Search_Bin(SSTable T, KeyType k)
{
    int left = 0;
    int right = k - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (T.R[mid].key < k)
        {
            left = mid + 1;
        }
        else if (T.R[mid].key > k)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return 0;
}