#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <iostream>
using namespace std;
class Date
{
public:
    Date(int year = 0, int month = 0, int day = 0)
    {
        _year = year;
        _month = month;
        _day = day;


    }
    Date& operator+=(int day)
    {
        _day += day;
        while (_day > GetMonthDay(_year, _month))
        {
            //月进位
            _day -= GetMonthDay(_year, _month);
            ++_month;
            //月满了进年
            if (_month == 13)
            {
                ++_year;
                _month = 1;
            }
        }
        return *this;
    }
    int GetMonthDay(int year, int month)
    {
        static int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
        if ((_month == 2) && (((_year % 4 == 0) && (_year % 100 != 0)) || (_year % 400 == 0)))
        {
            return 29;
        }
        return days[_month];
    }
    void print()const
    {
        printf("%04d-%02d-%02d\n", _year, _month, _day);
    }
private:
    int _year;
    int _month;
    int _day;

};
int main() {
    int year = 0, month = 0, day = 0, add = 0, m = 0;
    cin >> m;
    while (cin >> year >> month >> day >> add)
    {
        Date s(year, month, day);
        s += add;
        s.print();
    }
}
// 64 位输出请用 printf("%lld")
c