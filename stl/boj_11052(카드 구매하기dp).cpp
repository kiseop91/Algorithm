#include <iostream>
using namespace std;
int dp[10001]; // 해당인덱스에 최대값이 저장될 배열
int card[10001];//인덱스크기의 카드를 구매할때 드는 비용 저장.

int main()
{
	int n; //카드의 갯수
	int max_value = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> card[i];
	}
	dp[0] = 0;
	dp[1] = card[1];
	for (int i = 2; i <= n; i++) {
		for (int j = 0; j <= i; j++) {
			if (dp[i] < dp[i - j] + card[j]) {
				dp[i] = dp[i - j] + card[j];
			}
		}
	}

	cout << dp[n];

	return 0;
}