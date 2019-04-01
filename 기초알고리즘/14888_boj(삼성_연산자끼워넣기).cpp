#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int n;
	vector<int> arr;
	vector<int> u_operator;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}

	for (int i = 1; i <= 4; i++)
	{
		int tmp;
		cin >> tmp;
		for (int j = 0; j < tmp; j++)
			u_operator.push_back(i);
	}

	int maxvalue = -2140000000;
	int minvalue = 2140000000;
	// + - * /
	do {
		int idx = 1;
		int res = arr[0];

		for (const auto x : u_operator)
		{
			if (x == 1)
				res += arr[idx];
			else if (x == 2)
				res -= arr[idx];
			else if (x == 3)
				res *= arr[idx];
			else if (x == 4)
				res /= arr[idx];
			idx++;
		}
		maxvalue = max(maxvalue, res);
		minvalue = min(minvalue, res);

	} while (next_permutation(u_operator.begin(), u_operator.end()));

	cout << maxvalue << endl << minvalue;
	return 0;
}