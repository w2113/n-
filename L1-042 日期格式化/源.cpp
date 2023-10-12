#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 10; i >= 5; i--)
    {
        if (s[i] == '-')
        {
            i++;
            while (s[i] != '\0')
            {
                cout << s[i++];
            }
            break;
        }
    }
    cout << '-';
    for (int i = 0; i < 5; i++)
    {
        cout << s[i];
    }
    return 0;
}