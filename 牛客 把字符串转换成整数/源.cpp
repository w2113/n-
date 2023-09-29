#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
class Solution {
public:
    int StrToInt(string str) {
        int symbol = 1;
        if (str[0] == '-')
        {
            symbol = -1;
            str[0] = '0';
        }
        if (str[0] == '+')
        {
            symbol = 1;
            str[0] = '0';
        }
        int sum = 0;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] < '0' || str[i]>'9')
            {
                sum = 0;
                break;
            }
            sum = sum * 10 + str[i] - '0';
        }
        return symbol * sum;
    }
};