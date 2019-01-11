#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int v[9];
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v, v + n);
	int ans = -987654321;
	int current_sum = 0;
	do
	{
		for (int i = 1; i < n; i++) {
			current_sum += abs(v[i] - v[i - 1]);
		}
		if (current_sum > ans)
			ans = current_sum;
		current_sum = 0;
	} while (next_permutation(v, v + n));
	cout << ans;
	return 0;
}
