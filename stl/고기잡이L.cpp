/*
		고기잡이(L) 2차원배열탐색 BigO(n의 4제곱)
		2018 12 15일
*/
#include <iostream>
using namespace std;
int map[101][101];
int n, m, w, h,tmp,res;

void input();

int main()
{
	
	input();

	for (int i = 1; i <= n -h+ 1; i++)
	{
		for (int j = 1; j <= m - w + 1; j++)
		{
			tmp = 0;
			for (int k = i; k <= i + h - 1; k++)
			{
				for (int q = j; q <= j + w - 1; q++)
				{
					tmp += map[k][q];
				}
			}
			if (tmp > res)
				res = tmp;
		}
	}
	cout << res << endl;
	return 0;
}
//1 3
//2 6
//1 0 2 0 4 3
//3 4 0 2 0 1

void input()
{
	cin >> n >> m >> h >> w;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> map[i][j];
		}
	}
}