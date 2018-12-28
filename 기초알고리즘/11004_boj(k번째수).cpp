#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
int s[5000001];
int main()
{
	std::ios::sync_with_stdio(false);
	int n, k;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> s[i];

	sort(s, s + n);
	cout << s[k - 1] << '\n';

	return 0;
}
