#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string arrangement) {
	int cnt = 0;
	int answer = 0;
	for (int i = 0; i < arrangement.length(); i++)
	{
		if (arrangement[i] == '(')
		{
			if (arrangement[i + 1] == ')')
			{
				answer += cnt;
			}
			else
			{
				cnt++;
			}
		}
		else if (arrangement[i] == ')')
		{
			if (arrangement[i - 1] == '(')
				continue;
			cnt--;
			answer += 1;
		}
	}
	return answer;
}
int main()
{
	string s;
	cin >> s;

	cout<<solution(s);
	
}