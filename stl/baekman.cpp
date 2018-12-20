#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		int n; //
		cin >> n;
		vector<pair<long long, long long>> most_expensive;
		vector<pair<long long, long long>> selling;
		//pair<int, int> most_exp;
		for (int i = 0; i < n; i++)
		{
			long long tmp;
			cin >> tmp;//가격
			selling.push_back(make_pair(tmp, i));         //가격과 날짜 입력
			most_expensive.push_back(make_pair(tmp, i));  //복사본, (정렬해서 쓸거)
		}
		//가격으로정렬.
		sort(most_expensive.begin(), most_expensive.end()); //가장 비싼날로 정렬(오름차순) 제대로비교함수만들어줘야함.
		int cnum = 0; //현재가지고있는물건수
		long long cmoney = 0; //현재까지 산물건의가격합
		long long res = 0; // 이득의 총계
		pair<long long, long long> most_exp = most_expensive.back();
		for (int i = 0; i < n; i++)
		{

			if ((most_exp.second < selling[i].second ) && most_expensive.size()!=0 ) //가장비싼값의날짜가 지난날이면 팝을한다.
			    	most_expensive.pop_back();
			if (most_exp.second ==selling[i].second) //만약 오늘이 가장비싼날이면 가지고있는것을다판다. 아무것도안산다.
			{
				res+=selling[i].first*cnum;	//팔때가격은 오늘가격에 가지고있는물건의총수
				res = res - cmoney;//오늘까지쓴돈이빠짐.
				cmoney = 0; //정산했으니 0
				cnum = 0;	//다팔았으므로 가지고있는물건수는 0이된다.
			    most_expensive.pop_back();
				if (most_expensive.size() != 0) {
					most_exp = most_expensive.back(); //가장비싼날정보 갱신
				}
			}
			else  // 오늘이 가장비싼날이아니라면 물건을 산다.
			{
				cnum++; //물건수 추가.
				cmoney += selling[i].first;//이때까지 물건을살때쓴돈의비용
			}
		}

		//res = res - cmoney; // 총이득은 판가격에 구입한가격을 뺀값이다.

		cout << "#" << tc<<" "<<res<<endl;//답제출
		//답제출후에 모두초기화
		res = 0;
		cmoney = 0;
		cnum = 0;
		most_expensive.clear();
		selling.clear();
	}
	return 0;
}