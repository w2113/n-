#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <iostream>

using namespace std;

int main() {
    string s1, s2;
    cin >> s2;
    while (cin >> s1)
    {
        s2 = s1 + " " + s2;
    }
    cout << s2 << endl;
    return 0;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")