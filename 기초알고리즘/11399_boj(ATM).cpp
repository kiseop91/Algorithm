#include <iostream>
#include <algorithm>
using namespace std;
int dp[1001]; // i번째사람이 돈을뽑는데 걸리는 시간 dp[i]=dp[i-1]+s[i];
int s[1001];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> s[i];
	}

	sort(s, s + n + 1);
	dp[1] = s[1];
	for (int i = 2; i <= n; i++)
	{
		dp[i] = dp[i - 1] + s[i];
	}
	int res = 0;
	for (int& x : dp)
	{
		res += x;
	}
	cout << res;
}