#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n, m;

	cin >> n >> m;
	queue<int> q;
	for (int i = 1; i <= n; i++)
		q.push(i);
	cout << "<";
	while (!q.empty())
	{
		for (int i = 1; i <= m; i++)
		{
			if (i == m)
			{
				cout << q.front();
				q.pop();
			}
			else {
				q.push(q.front());
				q.pop();
			}
		}
		if (q.size() == 0)
			cout << ">";
		else
			cout << ", ";

	}
	return 0;
}