#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
#include <math.h>
using namespace std;


vector<string> answer;
string MakeBracket(bool *state, int size)
{
	string s;
	for (int i = 1; i < size; i++)
	{
		if (state[i])
		{
			//cout << "(";
			s.push_back('(');
		}
		else
		{
			//cout << ")";
			s.push_back(')');
		}
	}
	//cout << endl;
	return s;
}
void Bracket(bool *state, int size, int start, int end)
{
	if (start == 0 && end == 0)
	{
		string now = MakeBracket(state, size);
		answer.push_back(now);
		return;
	}
	if (start > 0) {
		state[size] = true;
		Bracket(state, size + 1, start - 1, end + 1);
	}
	if (end > 0) {
		state[size] = false;
		Bracket(state, size + 1, start, end - 1);
	}
}

int main()
{
	int n;
	cin >> n;
	bool state[2 * 100];
	Bracket(state, 1, n, 0);

	for (int i = 0; i < answer.size(); i++)
		cout << answer[i] << "   ";
	cin >> n;//멈추기용임.
	return 0;
}