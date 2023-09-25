#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
class Solution {
public:
    string reverseStr(string s, int k) {
        for (auto it = s.begin(); it < s.end(); it += 2 * k)
        {
            reverse(it, min(s.end(), it + k));
        }
        return s;
    }
};