#include <iostream>
using namespace std;
int n, m;
int map[101][101];
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
void input();
void fill_to_Air(int x, int y);
void print();
bool safe(int x, int y);
int main()
{
	input();
	fill_to_Air(0,0);
	print();
	
	return 0;
}

void fill_to_Air(int x, int y)
{
  	map[x][y] = 2;  
	for (int i = 0; i < 4; i++)
	{
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (safe(nx, ny) && map[nx][ny] == 0)
			fill_to_Air(nx, ny);

	}
}

void print()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<< map[i][j]<< " ";
		}
		cout << endl;
	}
}

void input()
{
	cin >> n >> m;

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
	return (0 <= x && x < n) && (0 <= y && y < m);
}