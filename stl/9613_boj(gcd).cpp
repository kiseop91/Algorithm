#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int gcd(int a, int b);
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		long long num[101];
		long long sum=0;
		cin >> n;
		for (int i = 0; i < n; i++)
			scanf_s("%lld", &num[i]);
		
		for (int i = 0; i < n-1; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				sum += gcd(num[i], num[j]);
			}
		}

		cout << sum << endl;
	}

	return 0;
}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else
		return gcd(b, a%b);
}