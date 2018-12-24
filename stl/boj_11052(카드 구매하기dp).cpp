#include <iostream>
using namespace std;
int dp[10001]; // �ش��ε����� �ִ밪�� ����� �迭
int card[10001];//�ε���ũ���� ī�带 �����Ҷ� ��� ��� ����.

int main()
{
	int n; //ī���� ����
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