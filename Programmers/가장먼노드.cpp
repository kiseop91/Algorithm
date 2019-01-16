#include <string>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
int chk[20001];
int num[20001];
using namespace std;
int cnt = 0;
void bfs(int node, vector<int> v[])
{
	chk[node] = true;
	queue<int> q;
	q.push(node);
	while (!q.empty())
	{
		int curNode = q.front();
		q.pop();
		//	cout << curNode << " " << num[curNode] << endl;
		for (int i = 0; i < v[curNode].size(); i++)
		{
			int nextNode = v[curNode][i];
			if (chk[nextNode] == false)
			{
				num[nextNode] = num[curNode] + 1;
				chk[nextNode] = true;
				q.push(nextNode);
			}
		}
	}
}
int solution(int n, vector<vector<int>> edge) {
	int answer = 0;

	vector<int> v[20001];
	for (int i = 0; i < edge.size(); i++) {
		v[edge[i][0]].push_back(edge[i][1]);
		v[edge[i][1]].push_back(edge[i][0]);
	}

	bfs(1, v);
	int max = *max_element(num, num + n);
	//cout << max << endl;
	for (int i = 0; i <= n; i++)
	{
		if (num[i] == max)
			answer++;
	}
	//cout << answer << endl;
	return answer;
}

int main()
{
	vector<vector<int>> edge;
	edge = { {3, 6},{4, 3},{3, 2},{1, 3},{1, 2},{2, 4},{5, 2} };

	solution(6, edge);

	return 0;
}