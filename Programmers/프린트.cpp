#include <string>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	queue<pair<int, int>> q;
	queue<int> q2;
	int lo = priorities[location];
	int i = 0;
	for (int& x : priorities)
	{
		q.push({ x,i });
		i++;
	}
	sort(priorities.begin(), priorities.end(), greater<int>());
	for (int& x : priorities)
	{
		q2.push(x);
	}
	while (true)
	{
		if (q.front().first < q2.front())  //현재대기열이 제일높은대기열보다작으면 뒤로
		{
			auto temp = q.front();
			q.pop();
			q.push(temp);
		}
		else  //크거나같은경우 출력
		{
			answer++;
			q2.pop();
			auto tmp = q.front();
			q.pop();
			if (tmp.second == location)
				break;
		}
	}

	return answer;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		vector<int> p;
		int lo,k;
		cin >> k >> lo;
		for (int i = 0; i < k; i++)
		{
			int tmp;
			cin >> tmp;
			p.push_back(tmp);
		}
		cout << solution(p, lo) << endl;
	}
}