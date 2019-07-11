#include <iostream>
using namespace std;
int map[100][100];
long long dp[100][100];

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cin >> map[i][j];
	}

	dp[0][0] = 1;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 && j == 0)
				continue;
			if (j + map[i][j] < n)
				dp[i][j + map[i][j]] += dp[i][j];
			if (i + map[i][j] < n)
				dp[i + map[i][j]][j] += dp[i][j];
		}
	}
	cout << dp[n - 1][n - 1];
}