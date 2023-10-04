#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param pushV int����vector
     * @param popV int����vector
     * @return bool������
     */
    bool IsPopOrder(vector<int>& pushV, vector<int>& popV) {
        stack<int>stack;
        size_t pushi = 0, popj = 0;
        while (pushi < pushV.size())
        {
            stack.push(pushV[pushi++]);
            while (!stack.empty() && stack.top() == popV[popj])
            {
                stack.pop();
                popj++;
            }
        }
        return stack.empty();
    }
};