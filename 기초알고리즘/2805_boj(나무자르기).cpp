#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n, m;
int tree[10000001];

bool chk(int x)  // 높이 x로 잘랐을 때,  목표값 m과 비교해서 리턴. 
{
	long long tmp = 0;
	for (int i = 0; i < n; i++)
	{
		if ((tree[i] - x) > 0)
			tmp += tree[i] - x;
	}
	return tmp >= m;
}

int main()
{
	cin >> n >> m;

	int max = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> tree[i];
		if (max < tree[i])
			max = tree[i];
	}

	long long start = 1;
	long long end = max;
	long long mid = 0;
	long long ans = 0;

	while (start <= end)
	{
		mid = (start + end) / 2;

		if (chk(mid))
		{
			start = mid + 1;
			if (mid > ans)
				ans = mid;
		}
		else
		{
			end = mid - 1;
		}
	}

	cout << ans << endl;

	return 0;
}