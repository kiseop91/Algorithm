#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int map[101][101];
int n, m;
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };

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
	while (!q.empty())
	{
		pair<int, int> curr;
		curr = q.front();
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			int x = curr.first + dx[i];
			int y = curr.second + dy[i];
			if ((map[x][y] == 1)
				&& safe(x, y))
			{
				pair<int, int> next{ x, y };
				q.push(next);
				map[x][y] = map[curr.first][curr.second] + 1;
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
	cout << map[n - 1][m - 1] << endl;
	return 0;
}