#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	string s1, s2;
	cin >> s1 >> s2;
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());
	int cnt = 0;
	while ((s1.length() != 0) || (s2.length() != 0))
	{
		if ((s1.length() == 0) || (s2.length() == 0))
			break;
		if (s1.back() == s2.back())
		{
			s1.pop_back();
			s2.pop_back();
		}
		else if (s1.back() > s2.back())
		{
			s1.pop_back();
			cnt++;
		}
		else if (s1.back() < s2.back())
		{
			s2.pop_back();
			cnt++;
		}
	}
	cnt += (s1.length() + s2.length());

	cout << cnt;

	return 0;
}
