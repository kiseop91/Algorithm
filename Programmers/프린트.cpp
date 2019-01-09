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
		if (q.front().first < q2.front())  //�����⿭�� ���ϳ�����⿭���������� �ڷ�
		{
			auto temp = q.front();
			q.pop();
			q.push(temp);
		}
		else  //ũ�ų�������� ���
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