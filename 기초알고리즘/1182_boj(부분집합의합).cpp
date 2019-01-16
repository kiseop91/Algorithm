#include <iostream>
using namespace std;
int num[21];
int main()
{
	int n, s, sum, ans;
	ans = 0;
	cin >> n >> s;
	for (int i = 0; i < n; i++)
		cin >> num[i];

	for (int i = 1; i < (1 << n); i++)
	{
		sum = 0;
		for (int j = 0; j < n; j++)
		{
			if (i&(1 << j))
				sum += num[j];
		}
		if (sum == s)
			ans++;
	}
	cout << ans;
	return 0;
}