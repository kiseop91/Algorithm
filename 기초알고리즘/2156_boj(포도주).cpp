#include <iostream>
#define max(a,b) (a>b?a:b)
long long dp[3][10001];  // 현재먹는 포도주가 몇번연속인지?
int g[10001]; //포도주정보
using namespace std;

int main()
{
	int n; //포도주잔개수
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> g[i]; //포도주정보입력

	dp[1][1] = g[1];
	dp[0][1] = 0;
	for (int i = 2; i <= n; i++)
	{   // 이번에 먹는 포도주가 몇번연속인가? 경우의수는3가지 0번,1번,2번
		dp[0][i] = max(max(dp[0][i - 1], dp[1][i - 1]), dp[2][i - 1]);  //0번연속인경우는 뒤에 3가지경우가모두가능
		dp[1][i] = dp[0][i - 1] + g[i];   //1번연속이면 전에 안먹고, 이번꺼먹으면됨
		dp[2][i] = dp[1][i - 1] + g[i];   //2번연속이면 이전에는 1번연속, 이번꺼도 먹으면된다.
	}

	cout << max(max(dp[0][n], dp[1][n]), dp[2][n]) << endl; //문제를3개로나눴으니 가장큰값을 답으로제출
	return 0;
}