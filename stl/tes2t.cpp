#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;


int main()
{
	string s;
	vector<string> res;
	cin >> s;
	int sLength = s.length()-1;
	res.push_back(s);
	for (int i = 0; i < sLength; i++) {
		reverse(s.begin(),s.end());
		s.pop_back();
		reverse(s.begin(), s.end());
		res.push_back(s);
	}

	sort(res.begin(), res.end());

	for (auto& x : res)
		cout << x << endl;
	return 0;
}