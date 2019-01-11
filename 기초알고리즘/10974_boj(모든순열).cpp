#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int v[10001];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		v[i - 1] = i;
	}
	do {
		for (int i = 0; i < n; i++)
			cout << v[i] << " ";
		cout << '\n';
	} while (next_permutation(v, v + n));
	return 0;
}