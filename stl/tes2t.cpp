#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;
vector<int> a[100001];
bool chk[100001];
int cnt;

int dfs(int v, int start, int num)
{
	chk[v] = true;

	int next = a[v][0];

	if (next == start)
		return 0;

	if (chk[next] == false)
		return dfs(next, start, num + 1);
	else
		return num;
}


int bfs(int v, int start)
{
	chk[v] = true;
	queue<int> q;
	q.push(v);
	int ncnt = 1;
	while (!q.empty())
	{
		int cur = q.front();
		q.pop();
		int next = a[cur][0];

		if (next == start)
			return 0;

		if (chk[next] == false)
		{
			q.push(next);
			chk[next] = true;
		}

		ncnt++;
	}
	return ncnt;
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
			if (tmp == i)
				chk[tmp] = true;
			a[i].push_back(tmp);
		}

		for (int i = 1; i <= n; i++)
		{
			if (chk[i] == false)
			{
				cnt += dfs(i, i, 1);
			}
		}


		cout << cnt << endl;

		a->clear();
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

