#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<iostream>
using namespace std;
struct node {
    int year, month, day;
}p;

int main() {
    while (scanf("%d%d%d", &p.year, &p.month, &p.day) != EOF) {
        int m[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
        if ((p.year % 4 == 0 && p.year % 100 != 0) || p.year % 400 == 0)
            m[2] = 29;
        if (p.month > 12 || p.month<1 || p.day>m[p.month] || p.day < 1) {
            cout << "Input error!" << endl;
            continue;
        }
        int d = p.day;
        p.month--;
        while (p.month > 0) {
            d += m[p.month];
            p.month--;
        }
        printf("%d\n", d);
    }
    return 0;
}