#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

long long fibo[50];
int main() {
	int n;
	cin >> n;
	fibo[1] = 1;
	fibo[2] = 1;

	for (int i = 3; i <= n; i++)
		fibo[i] = fibo[i - 1] + fibo[i - 2];

	cout << fibo[n] << endl;

	return 0;
}