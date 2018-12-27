#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001];
int s[1001];


int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> s[i];

	for (int i = 0; i < n; i++)
	{
		dp[i] = s[i];
		for (int j = 0; j < i; j++)
		{
			if (s[i] > s[j] && dp[i] < dp[j] + s[i])
			{
				dp[i] = dp[j] + s[i];
			}
		}
	}

	cout << *max_element(s, s + n) << endl;
	return 0;
}