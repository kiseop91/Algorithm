#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
char aeiou[5] = { 'a','e','i','o','u' };
char ch[16];
int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> per;
	for (int i = 0; i < m; i++) {
		cin >> ch[i];
	}

	for (int i = 0; i < n; i++)
		per.push_back(0);

	for (int i = 0; i < m - n; i++)
		per.push_back(1);

	sort(ch, ch + m);

	do {
		bool chk = true;
		int cnt = 0;
		int cnt2 = 0;
		for (int i = 0; i < m; i++)
		{
			if (per[i] == 0) {
				if ((ch[i] == aeiou[0] || ch[i] == aeiou[1] || ch[i] == aeiou[2] || ch[i] == aeiou[3] || ch[i] == aeiou[4]))
					cnt2++;
				else
					cnt++;
			}
		}
		if (chk == false && cnt >= 2) {
			for (int i = 0; i < m; i++)
			{
				if (per[i] == 0)
				{
					cout << ch[i];
				}
			}
			cout << '\n';
		}
	} while (next_permutation(per.begin(), per.end()));

	return 0;
}