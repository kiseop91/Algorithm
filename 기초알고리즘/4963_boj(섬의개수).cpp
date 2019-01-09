//���� ����
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int w, h; //  ��   ��    ��   ��   ��    ��    ��    ��    
int dx[] = { -1 , -1 , 0 , 1 , 1 , -1 ,  0 ,  1 };
int dy[] = { 0 ,  1 , 1 , 1 , 0 , -1 , -1 , -1 };
bool chk(int x, int y)
{
	return (0 <= x && x < h) && (0 <= y && y < w);
}

int map[51][51];  //1 �� ��, 0�� �ٴ�.

void dfs(int x, int y, int cnt)
{
	if (map[x][y] != 1) //�ѹ����ȹ������� �ƴ϶��
	{
		return;
	}
	map[x][y] = cnt; //�ѹ��������̸� äũ����.

	for (int i = 0; i < 8; i++)  //�̶����� �����ִ� 8���� �˻�
	{
		int nx = dx[i] + x;
		int ny = dy[i] + y; //������ǥ
		if (chk(nx, ny) && map[nx][ny] == 1) //������ǥ�� �ʾ��̰�, �ѹ����Ȱ����̸� ���ô�.
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
				//�������� �湮�����������̸� dfs(i,j,cnt++);
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