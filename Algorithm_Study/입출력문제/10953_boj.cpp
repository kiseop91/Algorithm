#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	char c;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%1d%1c%d", &a, &c, &b);
		printf("%d\n", a + b);
	}
	return 0;
}