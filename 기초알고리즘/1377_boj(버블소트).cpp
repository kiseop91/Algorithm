#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
int main()
{
	std::ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<pair<int, int>> s(n);
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		cin >> s[i].first;  
		s[i].second = i;
	}
	sort(s.begin(), s.end());

	for (int i = 0; i < n; i++)
	{
		if (cnt < s[i].second - i)
			cnt = s[i].second - i;
	}

	cout << cnt + 1 << endl;

	return 0;
}
