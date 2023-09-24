#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int n = 0;
    cin >> n;
    vector<int> a;
    a.reserve(n + 1);
    a[n] = 0;
    int i = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    i = 0;
    int count = 0;
    while (i < n)
    {
        if (a[i] < a[i + 1])
        {
            while (i < n && a[i] <= a[i + 1])
            {
                i++;
            }
            count++;
            i++;
        }
        else if (a[i] == a[i + 1])
        {
            i++;
        }
        else
        {
            while (i < n && a[i] >= a[i + 1])
            {
                i++;
            }
            count++;
            i++;
        }
    }
    cout << count << endl;
    return 0;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")