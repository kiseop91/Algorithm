#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int v[10001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v[i] = t;
	}
	int cnt = 0;
	do {
		cnt++;
		if (cnt == 2) {
			for (int i = 0; i < n; i++) {
				cout << v[i] << " ";
			}
			cout << endl;
			break;
		}

	} while (next_permutation(v, v + n));

	if (cnt == 1)
		cout << -1 << endl;
	return 0;
}