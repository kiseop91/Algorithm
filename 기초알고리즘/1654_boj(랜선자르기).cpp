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
		num += k[i] / mid;  // �߾Ӱ����� ������ �� ������ִ� �������� ���ϱ�.
	}

	return num >= n; // ���� ������ ������ִ� �������� ��ǥ������ũ�� �� ( �ٽ� )
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