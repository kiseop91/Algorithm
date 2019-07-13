#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
#include <math.h>
using namespace std;

vector<int> solution(int n, vector<string> words) {
	vector<int> answer;
	bool chk = true;
	int cnt = 1;
	set<string> s;
	while (true)
	{
		if (cnt - 1 == words.size())
			break;

		string now = words[cnt - 1];
		string next = "";
		if (cnt != words.size())
		{
			next = words[cnt];
		}

		if (!s.insert(now).second)
		{
			chk = false;
			break;
		}

		if (words.size() == cnt)
			break;

		if (now.back() != next[0]) {
			cnt++;
			chk = false;
			break;
		}
		cnt++;
	}


	int location = cnt / n + cnt % n;
	int cycle = ceil((double)cnt / (double)n);
	if (chk) {
		cycle = 0;
		location = 0;
	}

	answer.push_back(location);
	answer.push_back(cycle);

	return answer;
}


int main() {
	auto x = solution(3, { "tank", "kick", "know", "wheel", "land", "dream", "mother", "robot", "tank" });

	cout << x[0] << x[1];

	return 0;
}