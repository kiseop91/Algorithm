#include <iostream>
using namespace std;
int min_number[1000001];

int main()
{
	int n;
	cin >> n;
	min_number[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		min_number[i] = min_number[i - 1] + 1;
		if (i % 2 == 0 && min_number[i] > min_number[i / 2] + 1)
				min_number[i] = min_number[i / 2] + 1;
		if (i % 3 == 0 && min_number[i] > min_number[i / 3] + 1)
				min_number[i] = min_number[i / 3] + 1;			

	}
	cout << min_number[n] << endl;

	return 0;
}