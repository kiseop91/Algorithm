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
	int vn, kn;
	cin >> vn >> kn;
	for (int i = 0; i < kn; i++)
	{
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	int cnt = 0;
	for (int i = 1; i <= vn; i++)
	{
		if (check[i] == false) {
			dfs(i);
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}
