#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <algorithm>
#include <cstring>

using namespace std;
vector<int> a[300001];
bool check[300001];


void dfs(int x) {
	check[x] = true;
	printf("%d ", x);
	for (int i = 0; i < a[x].size(); i++) {
		int y = a[x][i];
		if (check[y] == false) {
			dfs(y);
		}
	}
}

void bfs(int start) {
	queue<int> q;
	memset(check, false, sizeof(check));
	check[start] = true;
	q.push(start);
	while (!q.empty()) {
		int node = q.front();
		q.pop();
		printf("%d ", node);
		for (int i = 0; i < a[node].size(); i++) {
			int next = a[node][i];
			if (check[next] == false) {
				check[next] = true;
				q.push(next);
			}
		}
	}
}
int main()
{
	int n, m, s; //s탐색 시작위치 
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		int u, v;
		scanf_s("%d %d", &u, &v);
		if (i == 0)
			s = u;
		a[u].push_back(v);
		a[v].push_back(u);
	}

	for (int i = 1; i <= n; i++) {
		sort(a[i].begin(), a[i].end());
	}



	dfs(s);
	puts("");
	//bfs(s);
	//puts("");

	return 0;
}