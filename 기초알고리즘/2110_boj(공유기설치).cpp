#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

bool chk(const vector<int> &v, int c, int x) // 공유기 간 거리가 가장 짧은 곳을 결정
{
	int cnt = 1;
	int last = v[0];
	for (const int house : v)   //가장 짧은 곳을 결정했을 때 설치할수있는 공유기의 숫자를 계산
	{
		if (house - last >= x) {
			cnt += 1;
			last = house;
		}
	}

	return cnt >= c;
}

int main()
{
	int n, c;
	cin >> n >> c;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int start = 1;
	int end = a[n - 1] - a[0];
	int ans = start;

	while (start <= end)
	{
		int mid = (start + end) / 2;
		if (chk(a, c, mid))
		{
			if (ans < mid)
				ans = mid;
			start = mid + 1;
		}
		else
			end = mid - 1;
	}

	cout << ans << endl;


	return 0;
}