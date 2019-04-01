#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
using namespace std;
bool visit[20001];
vector<int> arr[2001];
bool flag = false;
void dfs(int start, int cnt)
{
	if (cnt == 5)
	{
		flag = true;
		return;
	}
	for (int i = 0; i < arr[start].size(); i++)
	{
		int next = arr[start][i];
		if (visit[next] == false)
		{
			visit[start] = true;
			dfs(next, cnt + 1);
			visit[start] = false;
		}
		if (flag) return;
	}
}
int main() {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int t1, t2;
		cin >> t1 >> t2;
		arr[t1].push_back(t2);
		arr[t2].push_back(t1);
	}

	for (int i = 0; i < n; i++)
	{
		dfs(i, 1);
		memset(visit, false, sizeof(visit));
		if (flag == true)
			break;
	}

	if (flag == true)
		cout << 1;
	else
		cout << 0;

	return 0;
}