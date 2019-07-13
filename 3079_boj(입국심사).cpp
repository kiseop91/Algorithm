#include <string>
#include <vector>
#include <iostream>

using namespace std;
int n, target;
long long times[100001];
bool chk(long long mid)
{
	long long cnt = 0;
	for (int i = 0; i < n; i++)
		cnt += mid / times[i];
	return cnt >= target;
}
int main()
{
	cin >> n >> target;
	for (int i = 0; i < n; i++)
		scanf("%d", &times[i]);
	long long answer = 100000000000000LL;
	long long s = 0;
	long long e = 100000000000000LL;
	while (s <= e) {
		long long mid = (s + e) / 2;
		if (chk(mid)) {
			if (answer > mid)
				answer = mid;
			e = mid - 1;
		}
		else
			s = mid + 1;
	}
	cout << answer;
	return 0;
}

