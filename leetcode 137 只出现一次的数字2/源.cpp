#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0, y = 0;
        for (auto num : nums)
        {
            y = (y ^ num) & ~x;
            x = (x ^ num) & ~y;
        }
        return y;
    }
};
