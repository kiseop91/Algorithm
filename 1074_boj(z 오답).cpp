#include <iostream>
#include <math.h>

using namespace std;


int map[16][16]; // 배열범위 실수, 2^16 x 2^16이 최대. 즉, 너무큰 배열범위 총연산량 대략 36억 
int cnt = 0;
void write(int x, int y, int n)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			map[x + i][y + j] = cnt++;
		}
	}
}

void solve(int x, int y, int n)
{
	if (n < 2) return;
	else if (n == 2)
	{
		write(x, y, n);
	}
	else {
		int m = n / 2;
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				solve(x + m * i, y + m * j, m);
			}
		}
	}

}

int main() {
	int n, r, c;
	cin >> n >> r >> c;

	solve(0, 0, pow(2, n));

	cout << map[r][c];

	return 0;
}