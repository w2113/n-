#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
class Solution {
public:
    string reverseWords(string s) {
        int begin = 0, end;
        int n = s.size();
        for (int i = 0; i < n + 1; i++)
        {
            if (s[i] == ' ' || s[i] == '\0')
            {
                for (end = i - 1; begin < end; begin++, end--)
                {
                    swap(s[begin], s[end]);
                }
                begin = i + 1;
            }
        }
        return s;
    }
};