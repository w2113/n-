#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<iostream>
#include<string.h>
using namespace std;
const int N = 1e3 + 9;
int vs[N];//vs[i] = 1表示id位i的书开始被借了 
int s[N];//记录开始时间 
int e[N]; //记录结束时间 
int main()
{


	int n;
	cin >> n;
	while (n--)
	{


		int id, h, m;
		char op[3];
		memset(vs, 0, sizeof(vs));
		int cnt = 0;
		int sum = 0;
		while (~scanf("%d %s %d:%d", &id, op, &h, &m))
		{

			if (op[0] == 'S')
			{

				vs[id] = 1;
				s[id] = h * 60 + m;
			}
			if (op[0] == 'E' && vs[id])//这个if的 判断必须加上vs[id] 
			{

				e[id] = h * 60 + m;
				sum += e[id] - s[id];
				// 这一步很重要 
				vs[id] = 0;
				cnt++;
			}
			if (!id)
			{

				if (!cnt) cout << 0 << " " << 0 << endl;
				else  cout << cnt << " " << (int)(sum * 1.0 / cnt + 0.5) << endl;
				break;
			}
		}
	}
	return 0;
}

