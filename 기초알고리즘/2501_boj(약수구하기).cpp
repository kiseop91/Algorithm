#include <iostream>
using namespace std;
int num[10001];
int cnt = 1;
int main()
{
	int n, k; //n은 약수 k는 위치
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			num[cnt] = i;
			cnt++;
		}
	}
	if (cnt < k)
		cout << 0 << endl;
	else
		cout << num[k] << endl;

	return 0;
}