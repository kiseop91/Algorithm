#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int arr[500001];
int main() {
	int n;
	int ans = 0;
	cin >> n;
	stack<pair<int, int>> s;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
	{
		pair<int, int> p = { arr[i], 1 };
		while (!s.empty())
		{
			if (s.top().first < arr[i]) {
				ans += (long long)s.top().second;
				if (s.top().first == arr[i]) {
					p.second += s.top().second;
				}
				s.pop();
			}
			else
				break;
		}
		if (!s.empty())
			ans += 1;
		s.push(p);
	}

	return 0;
}