#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <iostream>
#include<string>
using namespace std;
bool IsCircle(const string& s)
{
    int begin = 0, end = s.size() - 1;
    while (begin < end)
    {
        if (s[begin] != s[end])
        {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}
int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    size_t count = 0;
    for (int i = 0; i <= str1.size(); i++)
    {
        string str = str1;
        str.insert(i, str2);
        if (IsCircle(str))
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")