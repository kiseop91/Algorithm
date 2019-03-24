#include <string>
#include <queue>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
int arr[10001];
//push front back size empty pop
int main()
{
	int n;
	cin >> n;

	int idx = 0;
	int front = 0;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			int tmp;
			cin >> tmp;
			arr[idx] = tmp;
			idx++;
		}
		if (s == "front")
		{
			if ((idx - front) == 0)
			{
				cout << -1 << '\n';
			}
			else
				cout << arr[front] << '\n';
		}
		if (s == "back")
		{
			if ((idx - front) == 0)
			{
				cout << -1 << '\n';
			}
			else
				cout << arr[idx - 1] << '\n';
		}
		if (s == "size")
		{
			cout << idx - front << '\n';
		}
		if (s == "empty")
		{
			if ((idx - front) == 0)
			{
				cout << 1 << '\n';
			}
			else
				cout << 0 << '\n';
		}
		if (s == "pop")
		{
			if ((idx - front) == 0)
			{
				cout << -1 << '\n';
			}
			else {
				cout << arr[front] << '\n';
				front++;
			}
		}

	}

	return 0;
}