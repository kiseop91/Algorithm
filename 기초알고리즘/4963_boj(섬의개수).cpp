//섬의 개수
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int w, h; //  ↑   ↗    →   ↘   ↓    ↙    ←    ↖    
int dx[] = { -1 , -1 , 0 , 1 , 1 , -1 ,  0 ,  1 };
int dy[] = { 0 ,  1 , 1 , 1 , 0 , -1 , -1 , -1 };
bool chk(int x, int y)
{
	return (0 <= x && x < h) && (0 <= y && y < w);
}

int map[51][51];  //1 은 땅, 0은 바다.

void dfs(int x, int y, int cnt)
{
	if (map[x][y] != 1) //한번도안밟은땅이 아니라면
	{
		return;
	}
	map[x][y] = cnt; //한번밟은땅이면 채크해줌.

	for (int i = 0; i < 8; i++)  //이땅에서 갈수있는 8방향 검사
	{
		int nx = dx[i] + x;
		int ny = dy[i] + y; //다음좌표
		if (chk(nx, ny) && map[nx][ny] == 1) //다음좌표가 맵안이고, 한번도안간곳이면 갑시다.
		{
			dfs(nx, ny, cnt);
		}
	}
}

void intialize()
{
	for (int i = 0; i < 51; i++)
	{
		for (int j = 0; j < 51; j++)
		{
			map[i][j] = 0;
		}
	}
}

int main()
{
	int t = true;
	while (t)
	{
		intialize();
		cin >> w >> h;
		if (w == 0 && h == 0)
			t = 0;

		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				cin >> map[i][j];
			}
		}
		//dfs 
		int cnt = 2;
		for (int i = 0; i < h; i++)
		{
			for (int j = 0; j < w; j++)
			{
				//각점마다 방문하지않은곳이면 dfs(i,j,cnt++);
				if (map[i][j] == 1)
				{
					dfs(i, j, cnt++);
				}
			}
		}
		if (t != 0)
			cout << cnt - 2 << endl;
	}
	return 0;
}