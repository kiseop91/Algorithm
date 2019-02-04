#include <iostream>
using namespace std;
long long kNum, n;
long long k[10001];
long long Max = 0;

bool chk(long long mid)
{
	long long num = 0;
	for (int i = 0; i < kNum; i++)
	{
		num += k[i] / mid;  // 중앙값으로 나눴을 때 만들수있는 랜선갯수 구하기.
	}

	return num >= n; // 현재 값으로 만들수있는 랜선수가 목표값보다크면 참 ( 핵심 )
}

int main()
{
	cin >> kNum >> n;
	for (int i = 0; i < kNum; i++)
	{
		cin >> k[i];
		if (Max < k[i])
			Max = k[i];
	}

	long long ans = 0;
	long long start = 1;
	long long end = Max;

	while (start <= end)
	{
		long long mid = (start + end) / 2;
		if (chk(mid))
		{
			if (ans < mid)
			{
				ans = mid;
			}
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}

	cout << ans << endl;

	return 0;
}