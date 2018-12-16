#include <iostream>
#include <vector>
using namespace std;
vector < pair<int, int>> vertex[11];
int n;
int chk[11];
void dfs(int v, int sum, int cnt);
int res = 2147483647;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int  v;
			cin >> v;
			if (v)
			{
				vertex[i].push_back(make_pair(j, v)); //단방향 그래프
			}

		}
	}
	for (int i = 1; i <= n; i++)
	{
		dfs(i, 0, 1);
	}

	cout << res << endl;
	return 0;
}
void dfs(int v, int sum, int cnt)
{
	if (cnt == n + 1)  //n개의 도시를 모두 돌았을 때,
	{
		sum += vertex[v][1].second; //마지막 도착지점에서 처음 시작한곳으로 간다.
		if (res > sum)  //최소값이면 갱신
		{
			res = sum;
			sum = 0;
			return;
		}
		return;
	}

	for (int i = 0; i < vertex[v].size(); i++)
	{
		if (!chk[v])//방문을 안한곳이라면.
		{
			chk[v] = 1;
			int next_v = vertex[v][i].first;
			dfs(next_v, sum + vertex[v][i].second, cnt + 1);
			chk[v] = 0;
		}
	}

}