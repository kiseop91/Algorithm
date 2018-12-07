#include <iostream>
using namespace std;

int main()
{
	int a, ans, n;
	ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		scanf("%1d", &a);
		ans += a;
	}
	cout << ans << endl;

	return 0;
}