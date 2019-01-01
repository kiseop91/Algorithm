#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> tree[100001];
vector<int> parent(100001);
void bfs(int x)
{
	queue<int> q;
	q.push(x);
	parent[x] = true;
	while (!q.empty()) {
		int now = q.front();
		q.pop();
		for (int i = 0; i < tree[now].size(); i++)
		{
			int next = tree[now][i];
			if (parent[next] == false) 
			{
				parent[next] = now;
				q.push(next);
			}
		}
	}
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n-1; i++)
	{
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}

	bfs(1);

	for (int i = 2; i <= n; i++)
		cout << parent[i] << '\n';
	return 0;
}