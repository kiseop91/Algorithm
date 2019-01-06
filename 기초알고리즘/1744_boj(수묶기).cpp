#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> Nplus;
	vector<int> Nminus;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (num > 0)
			Nplus.push_back(num);
		else
			Nminus.push_back(num);
	}

	sort(Nplus.begin(), Nplus.end());
	reverse(Nplus.begin(), Nplus.end());
	sort(Nminus.begin(), Nminus.end());

	int ans = 0;

	if (Nplus.size() != 0) {
		while (Nplus.back() == 1)
		{
			ans++;
			Nplus.pop_back();
			if (Nplus.size() == 0) {
				break;
			}
		}
	}

	if (Nplus.size() != 0) {
		if (Nplus.size() % 2 != 0) {
			ans += Nplus.back();
			Nplus.pop_back();
		}
	}
	// 6 -1 0 0 0 0 0 
	if (Nminus.size() != 0) {
		if (Nminus.size() % 2 != 0) {
			ans += Nminus.back();
			Nminus.pop_back();
		}
	}
	for (int i = 1; i < Nplus.size(); i += 2)
	{
		ans += (Nplus[i - 1] * Nplus[i]);
	}

	for (int i = 1; i < Nminus.size(); i += 2)
	{
		ans += (Nminus[i - 1] * Nminus[i]);
	}

	cout << ans << endl;
}