#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		vector <int> v;
		bool chk = true;
		cin >> s;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '(')
				v.push_back(1);
			else
			{
				if (v.size() == 0) {
					cout << "NO" << '\n';
					chk = false;
					break;
				}
				v.pop_back();
			}
		}

		if (v.size() == 0 && chk == true)
			cout << "YES" << '\n';
		else if (chk == true)
			cout << "NO" << "\n";
	}

	return 0;
}