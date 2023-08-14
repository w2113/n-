#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void swap(int* x, int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
void print(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int hoare(int* a, int left, int right)
{

    int mid = (left + right) / 2;
    if (a[left] > a[right])
        swap(&a[left], &a[right]);
    if (a[mid] > a[right])
        swap(&a[mid], &a[right]);
    if (a[mid] > a[left])
        swap(&a[mid], &a[left]);

    int key = left;
    while (left < right)
    {
        while (left < right && a[right] >= a[key])
        {
            right--;
        }
        while (left < right && a[left] <= a[key])
        {
            left++;
        }
        swap(&a[left], &a[right]);
    }
    swap(&a[key], &a[left]);

    return left;
}
void quick_sort(int* a, int begin, int end)
{
    if (begin >= end)
    {
        return;
    }
    int keyi = hoare(a, begin, end);
    int keyileft = keyi - 1;
    int keyiright = keyi + 1;

    while (keyileft > begin && a[keyileft] == a[keyi])
    {
        keyileft--;
    }
    while (keyiright < end && a[keyiright] == a[keyi])
    {
        keyiright++;
    }

    quick_sort(a, begin, keyileft);
    quick_sort(a, keyiright, end);
}
void TestOP()
{
    srand(time(0));
    const int N = 100000;
    int* a7 = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; ++i)
    {
        a7[i] = rand();
    }
    int begin7 = clock();
    quick_sort(a7, 0, N-1);
    int end7 = clock();
    printf("quick_sort:%d\n", end7 - begin7);
    print(a7, N);

    free(a7);
}
int main()
{
    int a[] = { 50,2,3,7,5,60,87,21,22 };
    //quick_sort(a, 0, sizeof(a) / sizeof(int) - 1);
    TestOP();
    //print(a, sizeof(a) / sizeof(int));
    //print(a, sizeof(a) / sizeof(int));
}