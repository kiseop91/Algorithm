#include <iostream>
#include <algorithm>
using namespace std;
struct Meeting
{
	int begin, end;
};
Meeting meeting[100001];

bool cmp(const Meeting& a, const Meeting& b)
{
	if (a.end == b.end)
	{
		return a.begin < b.begin;
	}
	else
		return a.end < b.end;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int a, b;
		cin >> a >> b;
		meeting[i] = { a,b };
	}

	sort(meeting, meeting + n, cmp);

	int count = 1;
	int cur_end = meeting[0].end;
	int cur_begin = meeting[0].begin;
	for (int i = 1; i < n; i++)
	{
		if (cur_end <= meeting[i].begin)
		{
			count++;
			cur_end = meeting[i].end;
		}
	}
	cout << count << endl;
}