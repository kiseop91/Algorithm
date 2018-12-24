#include <iostream>
//constexpr auto mod = 1000000000; // c++17
#define mod 1000000000
using namespace std;
long long dp[101][10];  // dp[n][k]  k는 n자리계단수에 n번째수를 의미함.

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= 9; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= n; i++)
	{
		dp[i][0] = dp[i - 1][1] % mod;
		dp[i][9] = dp[i - 1][8] % mod;
		for (int j = 1; j <= 8; j++)
		{
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % mod;
		}
	}
	int res = 0;
	for (int i = 0; i <= 9; i++)
		res = (res + dp[n][i]) % mod;
	cout << res << endl;
	return 0;
}