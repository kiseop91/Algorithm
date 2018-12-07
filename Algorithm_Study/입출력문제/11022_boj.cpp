#include <iostream>
using namespace std;

int main()
{
	int a, b, n;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		//Case #1: 1 + 1 = 2
		printf("Case #%d: %d + %d = %d\n", i + 1, a, b, a + b);
	}
	return 0;
}