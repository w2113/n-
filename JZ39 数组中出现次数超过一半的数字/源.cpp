#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param numbers int整型vector
     * @return int整型
     */
    int MoreThanHalfNum_Solution(vector<int>& numbers) {
        // write code here
        int res = numbers[0];
        int count = 1;
        for (int i = 1; i < numbers.size(); i++)
        {
            if (count == 0)
            {
                res = numbers[i];
                count = 1;
            }
            else
            {
                if (numbers[i] == res)
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
        }
        return res;

    }
};