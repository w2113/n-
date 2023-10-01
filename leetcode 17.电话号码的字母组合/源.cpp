#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
class Solution {
public:
    string tmp;
    vector<string>n = { "","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
    vector<string>res;
    void dfs(int pos, string digits)
    {
        if (pos == digits.size())
        {
            res.push_back(tmp);
            return;
        }
        int num = digits[pos] - '0';
        for (int i = 0; i < n[num].size(); i++)
        {
            tmp.push_back(n[num][i]);
            dfs(pos + 1, digits);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0)
            return {};
        dfs(0, digits);
        return res;
    }
};