//  고기잡이 S 문제  121페이지.
//
//
#include <iostream>
using namespace std;
int map[101];
int res = 0;
int main()
{
	int n, k, tmp;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> map[i];

	for (int i = 1; i <= n - k + 1; i++) // 그물의크기가 k 이니 탐색범위는
	{                                    // 그물이 짤리는 부분부터는 검사할필요없음
		tmp = 0;                         // 그물을 비워줘야 정확한값을 얻을수있다.
		for (int j = i; j <= i + k - 1; j++) // 그물의 크기 k 범위안에 잡힌 물고기의 합을구함.
		{
			tmp += map[j];
		} 
		if (tmp > res)   
			res = tmp;
	}

	cout << res<<endl;
	return 0;
}