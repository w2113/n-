#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>r(numRows);
        if (numRows >= 1)r[0].push_back(1);
        if (numRows >= 2)
        {
            r[1].push_back(1);
            r[1].push_back(1);
        }
        for (int i = 2; i < numRows; i++)
        {
            r[i].push_back(1);
            for (int j = 1; j <= i - 1; j++)
            {
                r[i].push_back(r[i - 1][j] + r[i - 1][j - 1]);
            }
            r[i].push_back(1);
        }
        return r;
    }
};