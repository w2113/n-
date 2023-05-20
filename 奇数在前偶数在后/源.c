#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
void sort(int x[], int n)
{
    int left = 0, right = n - 1;
    while (left < right)
    {
        while (left < right&&x[right] % 2 ==0)
            right--;
        while (left < right&&x[left] % 2 ==1)
        {
            left++;
        }
        if (left < right)
        {
            int tmp = x[left];
            x[left] = x[right];
            x[right] = tmp;
        }
        left++;
        right--;
    }
}
void print(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,8,7,9,1,5 };
	int sz =sizeof(arr)/sizeof(arr[0]);
	sort(arr, sz);
    print(arr, sz);
	return 0;
}