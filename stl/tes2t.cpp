#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector<int> a[100001];
bool chk[100001];
int cnt;
void dfs(int v, int start)
{

	chk[v] = true;

	for (int i = 0; i < a[v].size(); i++)
	{
		int next = a[v][i];
		if (chk[next] == false )
		{
			dfs(next, start);
		}
		else if (next == start)
		{
			return;
		}
		else
		{
			cnt++;
			return;
		}
	}

}
int n;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;

		for (int i = 1; i <= n; i++) {
			int tmp;
			cin >> tmp;
			a[i].push_back(tmp);
		}

		for (int i = 1; i <= n; i++)
		{
			if (chk[i] == false)
			{
				dfs(i, i);
			}
		}


		cout << cnt << endl;


		/////초기화 필수.
		for (int i = 0; i <= n; i++)
			a[i].clear();
		memset(chk, 0, sizeof(chk));
		cnt = 0;
	}

	return 0;
}




/* 출력용
for (int i = 1; i <= n; i++) {
	cout << i << " ";
	for (int j = 0; j < a[i].size(); j++)
		cout << a[i][j] << " ";

	cout << endl;
}*/

