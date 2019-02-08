#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

bool chk(const vector<int> &v, int c, int x) // ������ �� �Ÿ��� ���� ª�� ���� ����
{
	int cnt = 1;
	int last = v[0];
	for (const int house : v)   //���� ª�� ���� �������� �� ��ġ�Ҽ��ִ� �������� ���ڸ� ���
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