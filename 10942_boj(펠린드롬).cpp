#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
using namespace std;

int numbers[2001];
int dp[2001][2001];
int solve(int s, int e)
{
	if (s == e)
		return 1;
	else if (s + 1 == e)
	{
		if (numbers[s] == numbers[e])
			return 1;
		else
			return 0;
	}
	if (dp[s][e] >= 0)
		return dp[s][e];
	if (numbers[s] != numbers[e])
		return dp[s][e] = 0;
	else
		return dp[s][e] = solve(s + 1, e - 1);
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> numbers[i];

	int m;
	cin >> m;
	memset(dp, -1, sizeof(dp));
	for (int i = 0; i < m; i++)
	{
		int s, e;
		cin >> s >> e;
		cout << solve(s-1, e-1) << endl;
	}

	return 0;
}