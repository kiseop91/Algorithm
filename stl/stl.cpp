#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
	stack<char> stk;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		char g = NULL;
		while (scanf_s("%1c", &g))
		{
			stk.push(g);
		}
		int s = stk.size();
		while (s--)
		{
			if (stk.top() == ')') {
				if (stk.size() == 0) {
					cout << "NO" << endl;
					continue;
				}
				stk.pop();
			}
		}

		if (stk.size() != 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}

	return 0;
}