#include <string>
#include <vector>
#include <iostream>
bool chk[21];
int ans;
using namespace std;
void dfs(vector<int> v, int cnt, int target);

int solution(vector<int> numbers, int target) {
	int answer = 0;
	dfs(numbers, 0, target);
	answer = ans;
	return answer;
}

void dfs(vector<int> v, int cnt, int target)
{
	if (cnt != 0)
		chk[cnt] = true;
	if (cnt == v.size() + 1)
	{//종료조건
		int index = 0;
		int res = 0;

		for (int i = 1; i < v.size() + 1; i++)
		{
			if (chk[i] == true)
			{
				res += v[i - 1];
			}
			else
			{
				res += v[i - 1] * -1;
			}
		}

		if (res == target)
			ans++;
		//	cout << endl;
			//cout << ans << endl;
	}
	int nx = chk[cnt + 1];
	for (int i = cnt; i < v.size() + 1; i++)
	{
		if (nx == false)//다음자리방문을 안했으면
		{
			dfs(v, ++cnt, target);
			chk[cnt] = false;
		}
	}
}