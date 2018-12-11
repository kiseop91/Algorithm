#include <iostream>
#include <algorithm>
using namespace std;
int map[25][25];
int n; //map size;
int dx[4] = { 1,0,-1,0 }; //좌 하 우 상
int dy[4] = { 0,1,0,-1 };
void input();
void solve(int x, int y, int c);
void print();
bool safe(int x, int y);
int cnt = 0;
int main()
{

	input();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (map[i][j] == 1) {
				cnt++;
				solve(i, j, cnt + 1);
			}
		}
	}
//	print();
	int size[625] = { 0 };
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			if (map[i][j])
				size[map[i][j] - 2]++;
		}
	}

	sort(size, size + cnt);
	cout << cnt << endl;
	for (int i = 0; i < cnt; i++)
		cout << size[i] << endl;
	return 0;
}

void input()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int x;
			scanf_s("%1d", &x);
			if (x == 0)
				map[i][j] = 0;
			else
				map[i][j] = 1;
		}
	}
}

void print()
{
	cout << endl;
	for (int i = 0; i < n; i++)
	{

		for (int j = 0; j < n; j++)
			cout << map[i][j];
		cout << endl;
	}
}

void solve(int x, int y, int c) // 풀이.
{
	if (map[x][y] == 1)
		map[x][y] = c;
	for (int i = 0; i < 4; i++)
		if ( ( map[x + dx[i]][y + dy[i]] == 1) && ( safe(x + dx[i], y + dy[i])))
		{
			map[x + dx[i]][y + dy[i]] = c;
			solve(x + dx[i], y + dy[i], c);
		}
}

bool safe(int x, int y)
{
	return  ((0 <= x && x < n) && (0 <= y && y < n));

}