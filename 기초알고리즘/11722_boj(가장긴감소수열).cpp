#include <iostream>
#include <algorithm>
using namespace std;
long long dp[1001];
int s[1001];
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> s[i];

	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (s[i] < s[j] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
			}
		}
	}

	cout << *max_element(dp, dp + n) << endl;
	return 0;
}