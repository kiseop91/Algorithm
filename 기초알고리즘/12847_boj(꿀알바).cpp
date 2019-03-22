#include <iostream>
#include <algorithm>
using namespace std;
long long dp[1000002];
long long day[1000002];
int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> day[i];
	for (int i = 1; i <= m; i++)
		dp[1] += day[i];
	long long res = dp[1];
	for (int i = m + 1; i <= n; i++)
	{
		dp[i - m + 1] = dp[i - m] - day[i - m] + day[i];
		res = max(res, dp[i - m + 1]);
	}
	cout << res << endl;
	return 0;
}