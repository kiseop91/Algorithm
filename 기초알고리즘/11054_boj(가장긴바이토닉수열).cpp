#include <iostream>
#include <algorithm>
using namespace std;

int s[1001];
long long dp[2][1001];  //0감소 1증가

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> s[i];

	for (int i = 0; i < n; i++)
	{
		dp[0][i] = 1;
		dp[1][i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (s[i] > s[j] && dp[0][i] < dp[0][j] + 1)
			{
				dp[0][i] = dp[0][j] + 1;
			}
		}
		for (int j = i; j < n; j++)
		{
			if (s[i] < s[j] && dp[1][i] < dp[1][j] + 1)
			{
				dp[1][i] = dp[1][j] + 1;
			}
		}
	}
	int max = 0;
	int max2 = 0;
	for (int i = 0; i < n; i++)
	{
		if (max < dp[0][i])
			max = dp[0][i];
	}
	for (int i = 0; i < n; i++)
	{
		if (max2 < dp[1][i])
			max2 = dp[1][i];
	}
	cout << max + max2 << endl;
	return 0;
}