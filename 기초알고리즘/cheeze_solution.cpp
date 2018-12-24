#include <iostream>
using namespace std;
int a1[101][101], a2[101][101];
int n, m;
void copy()
{
	int i, j;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
			a1[i][j] = a2[i][j];
}
void fill1(int x, int y)
{
	if (x<1 || y<1 || x>n || y>m) return;
	if (a1[x][y] == 0)
	{
		a1[x][y] = 2;
		fill1(x + 1, y);
		fill1(x - 1, y);
		fill1(x, y + 1);
		fill1(x, y - 1);

	}
}
int check(int x, int y)
{
	int t = 0;
	if (a1[x + 1][y] == 2) t++;
	if (a1[x - 1][y] == 2) t++;
	if (a1[x][y + 1] == 2) t++;
	if (a1[x][y - 1] == 2) t++;
	return t;
}
int main() {

	int i, j, count;
	int hour = 0;
	cin >> n >> m;

	for (i = 1; i <= n; i++)
		for (j = 1; j <= m; j++)
		{
			cin >> a1[i][j];
			a2[i][j] = a1[i][j];
		}
	while (1)
	{
		fill1(1, 1);
		count = 0;
		for(i=1; i<=n; i++)
			for (j = 1; j <= m; j++)
			{
				if (a1[i][j] == 1 && check(i, j) >= 2)
				{
					a2[i][j] = 0;
					count++;
				}
			}
		if (count == 0)
		{
			cout << hour;
			break;
		}
		hour++;
		copy();
	}

	return 0;
}