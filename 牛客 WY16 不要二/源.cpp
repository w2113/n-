#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int w = 0, h = 0;
    cin >> w >> h;
    vector<vector<int>>r(w);
    int count = 0;
    for (auto& i : r)
    {
        i.resize(h, 1);
    }
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if (r[i][j] == 1)
            {
                count++;
                if (i + 2 < w)
                {
                    r[i + 2][j] = 0;
                }
                if (j + 2 < h)
                {
                    r[i][j + 2] = 0;
                }
            }

        }
    }
    cout << count << endl;
    return 0;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")