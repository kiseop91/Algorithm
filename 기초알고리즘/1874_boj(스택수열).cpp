#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

void input(queue<int>& target, int num)
{
	for (int i = 0; i < num; i++)
	{
		int t;
		scanf("%d", &t);
		target.push(t);
	}
}

int main() {
	int num;
	vector<int> s;
	queue<int> target;
	vector<char> res;

	scanf("%d", &num);
	input(target, num);
	for (int idx = 1; idx <= num; idx++)
	{
		if (target.size() == 0)
			break;
		if (idx < target.front())
		{
			s.push_back(idx);
			res.push_back('+');
			//	cout << "+" << idx << endl;
		}
		else
		{
			if (idx == target.front()) {
				s.push_back(idx);
				res.push_back('+');
				//	cout << "+" << idx << endl;
			}

			while (true)
			{
				if ((s.size() == 0) || (target.size() == 0))
					break;

				if (target.front() != s.back())
				{
					if (idx < target.front())
						break;

					//cout << "-" << s.back() << endl;
					res.push_back('-');
					s.pop_back();
					if (target.front() > idx)
						break;
				}
				else
				{
					//	cout << "-" << target.front() << endl;
					target.pop();
					s.pop_back();
					res.push_back('-');
				}
			}
			//to do : while() pop;
		}
	}
	if (target.size() == 0) {
		for (const auto x : res)
			printf("%c\n", x);
	}
	else
		printf("NO\n");
	return 0;
}