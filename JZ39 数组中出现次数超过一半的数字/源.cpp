#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param numbers int����vector
     * @return int����
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