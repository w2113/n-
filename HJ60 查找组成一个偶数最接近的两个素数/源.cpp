#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <iostream>
#include<cmath>
using namespace std;
bool isprime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int main() {
    int num = 0;
    int half = 0;
    int i = 0;
    while (cin >> num)
    {
        half = num / 2;
    }
    for (i = half; i > 0; i--)
    {
        if (isprime(i) && isprime(num - i))
            break;
    }
    cout << i << endl << num - i << endl;
    return 0;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")