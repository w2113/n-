#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <iostream>
using namespace std;

int main() {
    string str, cur, res;
    cin >> str;
    int i = 0;
    while (i <= str.size())
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            cur += str[i];
        }
        else
        {
            if (cur.size() > res.size())
            {
                res = cur;
            }
            cur.clear();
        }
        i++;
    }
    cout << res << endl;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")