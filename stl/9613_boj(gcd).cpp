#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int gcd(int a, int b);
bool check[101];
int sum_gcd(int sum,int count,int n)
{
	if (count == n)
	{
		return sum;
	}

	for (int i = 0; i < n; i++)
	{
		if (!check[i])
		{ 
			check[i] = 1;
			sum_gcd();
			check[i] = 0;
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		long long num[101];
		cin >> n;
		for (int i = 0; i < n; i++)
			scanf("%lld", &num[i]);
		


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