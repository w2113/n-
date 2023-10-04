#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param pushV int整型vector
     * @param popV int整型vector
     * @return bool布尔型
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