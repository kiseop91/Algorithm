#include <iostream>
#include <algorithm>
using namespace std;
long long dp[3][301];
int s[301];

int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> s[i];

	
	dp[1][1] = s[1];
	dp[2][2] = s[1] + s[2];
	dp[1][2] = s[2];
	

	for (int i = 3; i <= n; i++)
	{
		dp[1][i] = max(dp[1][i - 2], dp[2][i - 2]) + s[i];
		dp[2][i] = dp[1][i - 1] + s[i];
	}

	cout << max(dp[1][n], dp[2][n]) << endl;
	return 0;
}