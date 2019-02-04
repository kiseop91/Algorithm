#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	priority_queue<int,vector<int>, greater<int>> pq;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int cur;
		cin >> cur;

		if (cur == 0)
		{
			if (pq.empty())
				cout << 0 << '\n';
			else {
				cout << pq.top() << '\n';
				pq.pop();
			}
		}
		else
			pq.push(cur);
	}

	return 0;
}