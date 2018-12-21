#include <iostream>
using namespace std;
int dp[1001];

int solve(int n)
{
	if (n <= 1)
		return 1;
	if (n == 2)
		return 2;
	if (dp[n] != 0)
		return dp[n];
	else
	{
		dp[n] = solve(n - 1) + solve(n - 2);
		return dp[n];
	}

}
int main()
{
	int n;
	cin >> n;

	dp[1] = 1;
	dp[2] = 2;

	//bottom up
	for (int i = 3; i <= n; i++)
			dp[i] = dp[i - 1] + dp[i - 2];
	cout << dp[n] << endl;
	
	//top down
	solve(n);
	cout << dp[n] << endl;
	return 0;
}