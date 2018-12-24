#include <iostream>
using namespace std;
int n;
int chk[11];
int map[11][11];
void input();
int res = 999999;
void solve(int sum, int cnt)
{
	if (cnt == n)
	{
		if (sum < res)
		{
			res = sum;
			return;
		}
		//return;
	}

	for (int i = 0; i < n; i++)
	{
		if (chk[i] == 0)
		{
			chk[i] = 1;
			solve(sum + map[cnt][i], cnt + 1);
			chk[i] = 0;
		}
	}
}
int main()
{
	input();
	solve(0, 0);
	cout << res << endl;
	return 0;
}

void input()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
		}
	}
}