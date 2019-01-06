#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int ans = 0;
int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	while (k--){
		if (n >= 2 * m)
			n--;
		else
			m--;
	}

	if (n == 1 || m == 0)
		ans = 0;
	else if (n >= 2 * m)
		ans = m;
	else
		ans = n / 2;

	cout << ans;
}
