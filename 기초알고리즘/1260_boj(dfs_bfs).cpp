#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
#include <queue>
#include <memory>
#include <cstring>

using namespace std;
vector<int> v[10001];
bool check[10001];
//vector<bool> check(1001);

void dfs(int x)
{
	check[x] = true;
	cout << x << " ";
	for (int i = 0; i < v[x].size(); i++)
	{
		int y = v[x][i];
		if (check[y] == false)
			dfs(y);
	}
}

void bfs(int x)
{
	queue<int> q;
	check[x] = true;
	q.push(x);
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << " ";
		for (int i = 0; i < v[x].size(); i++)
		{
			int y = v[x][i];
			if (check[y] == false)
			{
				check[y] = true;
				q.push(y);
			}
		}
	}
}
int main()
{
	int vn, kn, sn;
	cin >> vn >> kn >> sn;
	for (int i = 0; i < kn; i++)
	{
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	//for (int i = 1; i <= vn; i++) {
	//	sort(v[i].begin(), v[i].end());
	//}

	dfs(sn);
	puts("");
	memset(check, 0, sizeof(check));
	bfs(sn);
	puts("");

	return 0;
}



// dfs bfs 출력
//4 5 1  정점수 간선수 시작점   정점수 1000개 간선수 10000개
//1 2
//1 3
//1 4
//2 4
//3 4
