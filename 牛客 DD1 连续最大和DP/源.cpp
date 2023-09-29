#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <iostream>
#include<vector>
using namespace std;
int GetMax(int x, int y)
{
    return x > y ? x : y;
}
int main() {
    int size = 0;
    cin >> size;
    vector<int>nums(size);
    for (int i = 0; i < size; i++)
    {
        cin >> nums[i];
    }
    int sum = nums[0];
    int max = nums[0];
    for (int i = 1; i < size; i++)
    {
        sum = GetMax(sum + nums[i], nums[i]);
        if (sum > max)
        {
            max = sum;
        }
    }
    cout << max << endl;
    return 0;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")