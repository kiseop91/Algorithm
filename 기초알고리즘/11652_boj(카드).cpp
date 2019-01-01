#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
using namespace std;
long long num[1000001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> num[i];

	sort(num, num + n);

	int cnt = 1;
	int ans_cnt = 1;
	long long ans_num = num[0];
	for (int i = 1; i < n; i++)
	{
		if (num[i] == num[i - 1])
			cnt++;
		else
			cnt = 1;
		if (ans_cnt < cnt)
		{
			ans_cnt = cnt;
			ans_num = num[i];
		}
	}

	cout << ans_num << endl;
	return 0;
}