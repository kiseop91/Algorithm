#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int k = 6;

void dfs(int idx, int cnt, int n, vector<int> lotto, vector<bool> chk)
{
	if (cnt >= k)
	{
		for (int i = 0; i < n; i++)
		{
			if (chk[i] == 1)
				cout << lotto[i] << " ";
		}

		cout << "\n";
		return;
	}

	for (int i = idx; i < n; i++)
	{

		if (chk[i] == false) {
			chk[i] = true;
			dfs(i + 1, cnt + 1, n, lotto, chk);
			chk[i] = false;
		}
	}

}

int main()
{
	while (true) {
		int n;
		cin >> n;
		vector<int> lotto(n);
		vector<bool> chk(n);
		if (n == 0)
			break;


		for (int i = 0; i < n; i++)
		{
			cin >> lotto[i];
		}

		dfs(0, 0, n, lotto, chk);
		cout << "\n";
	}

	return 0;
}