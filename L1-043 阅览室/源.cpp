#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<iostream>
#include<string.h>
using namespace std;
const int N = 1e3 + 9;
int vs[N];//vs[i] = 1��ʾidλi���鿪ʼ������ 
int s[N];//��¼��ʼʱ�� 
int e[N]; //��¼����ʱ�� 
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
			if (op[0] == 'E' && vs[id])//���if�� �жϱ������vs[id] 
			{

				e[id] = h * 60 + m;
				sum += e[id] - s[id];
				// ��һ������Ҫ 
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

