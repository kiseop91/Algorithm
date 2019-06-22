#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
using namespace std;
int map[65][65];
bool same(int x, int y, int n)
{
	int now = map[x][y];
	for (int i = x; i < x + n; i++)
	{
		for (int j = y; j < y + n; j++)
		{
			if (now != map[i][j])
				return false;
		}
	}
	return true;
}


void solve(int x, int y, int n)
{
	if (same(x, y, n))
	{
		printf("%d", map[x][y]);
	}
	else
	{
		int m = n / 2;
		printf("(");
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				solve(x + m * i, y + m * j, m);
			}
		}
		printf(")");
	}
}

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%1d", &map[i][j]);
		}
	}
	solve(0, 0, n);

	return 0;
}