#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> info_TodayPrice(1000001, 0);

int main()
{
	int t;
	scanf_s("%d", &t);
	for (int tc = 1; tc <= t; tc++)
	{
		int n;
		long long most_exp = 0;
		long long res = 0;
		long long current_num = 0;
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf_s("%lld", &info_TodayPrice[i]);
		}
		for (int i = n - 1; i >= 0; i--)
		{
			if (info_TodayPrice[i] >= most_exp)  //오늘매매가가 현재산최대매매값보다 크다면
			{
				res += current_num * most_exp; //최대가격 * 가지고있는물건수로 판다.
				current_num = 0;  //다팔았으니,현재 가지고있는 물건수는 0이 된다.
				most_exp = info_TodayPrice[i];  //최대값 갱신
			}
			else //아니라면 구매를 한다.
			{
				current_num++; //한개씩구매
				//오늘의 가격만큼구매에돈을썻으니  res에서빼준다.
				res -= info_TodayPrice[i];
			}
			if (i == 0) //가지고있는것을 모두팔아야함.
			{
				res += current_num * most_exp;
				current_num = 0;
			}
		}

		cout << "#" << tc << " " << res << endl;//답제출
	}
	return 0;
}