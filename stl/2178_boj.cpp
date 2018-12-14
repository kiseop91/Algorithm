#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int map[30][30];
int n, m;
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
int cnt;

void print()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << map[i][j];
		}
		cout << endl;
	}

}  //답 확인용 프린트함수.

bool safe(int x, int y)
{
	return (0 <= x && x < n) && (0 <= y && y < m);
}

void bfs(int x, int y)
{
	queue<pair<int, int>> q;
	pair<int, int> vertex{ x,y };
	q.push(vertex);
	map[x][y] = cnt;

	while (!q.empty())
	{
		pair<int, int> curr;
		curr = q.front();
		q.pop();
		cnt++;
		for (int i = 0; i < 4; i++)
		{
			if ((map[curr.first + dx[i]][curr.second + dy[i]] == 1)
				&& safe(curr.first + dx[i], curr.second + dy[i]))
			{
				pair<int, int> next{ curr.first + dx[i], curr.second + dy[i] };
				q.push(next);
				map[curr.first + dx[i]][curr.second + dy[i]] = cnt;
			}
		}
	}

}

int main()
{

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf_s("%1d", &map[i][j]);
		}
	}

	bfs(0, 0);

	print();
	cout << map[n - 1][m - 1] << endl;

	return 0;
}