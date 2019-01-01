#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <math.h>
#include <string>
#include <set>
#include <deque>
using namespace std;

vector<int> s(100001);
deque<int> d(100001);
int main()
{

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	//2  75  76  77

	sort(s.begin(), s.begin() + n);

	int a, b = 0;
	a = *max_element(s.begin(), s.begin() + n - 1) - *min_element(s.begin(), s.begin() + n - 1);
	b = *max_element(s.begin() + 1, s.begin() + n) - *min_element(s.begin() + 1, s.begin() + n);

	if (a > b)
		cout << b;
	else
		cout << a;

	return 0;
}