#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int n, m, x, y, k;
int dice[7];
int map[21][21];
int dx[5] = { 0,1,-1,0,0 }; // µ¿ ¼­ ºÏ ³²  1 2 3 4
int dy[5] = { 0,0,0,-1,1 };

void moveDice(int n)
{
	int temp[7] = { 0, dice[1],dice[2],dice[3],dice[4] ,dice[5],dice[6] };
	if (n == 1)
	{
		dice[1] = temp[4];
		dice[3] = temp[1];
		dice[4] = temp[6];
		dice[6] = temp[3];
	}
	else if (n == 2)
	{
		dice[1] = temp[3];
		dice[3] = temp[6];
		dice[4] = temp[1];
		dice[6] = temp[4];
	}
	else if (n == 3)
	{
		dice[1] = temp[5];
		dice[2] = temp[1];
		dice[5] = temp[6];
		dice[6] = temp[2];
	}
	else if (n == 4)
	{
		dice[1] = temp[2];
		dice[2] = temp[6];
		dice[5] = temp[1];
		dice[6] = temp[5];
	}
}
void initMap()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> map[i][j];
		}
	}
}
bool safe(int x, int y)
{
	return (0 <= x && x < m) && (0 <= y && y < n);
}

void solve()
{
	for (int i = 0; i < k; i++)
	{
		int move;
		cin >> move;

		int nx = x + dx[move];
		int ny = y + dy[move];
		if (safe(nx, ny))
		{
			moveDice(move);
			if (map[ny][nx] == 0) {
				map[ny][nx] = dice[6];
			}
			else {
				dice[6] = map[ny][nx];
				map[ny][nx] = 0;
			}
			x = nx;
			y = ny;
			cout << dice[1] << endl;
		}

	}
}
int main() {

	cin >> n >> m >> y >> x >> k;

	initMap();

	solve();

	return 0;
}