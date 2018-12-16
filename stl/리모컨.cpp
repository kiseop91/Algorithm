#include <iostream>
using namespace std;
int cur_temp;
int goal_temp;
int res=40;
int rmt_btn[6] = { 1,-1, 5, -5, 10, -10 };
void dfs(int cur_temp,int count);
int main()
{
	cin >> cur_temp >> goal_temp;

	dfs(cur_temp,0); //카운트가 0 부터 시작해야하는지 생각해보자.

	cout << res << endl;
	return 0;
}

void dfs(int cur_temp, int count)
{
	if (count > res)
		return;
	if (cur_temp == goal_temp)
	{
		if (count < res)
		{
			res = count;
			return;
		}
	}
	for (int i = 0; i < 6; i++)
	{/*
		if ((cur_temp + rmt_btn[i]) > goal_temp)
			return;
		}
		else
			dfs(cur_temp + rmt_btn[i], count + 1);*/

		if (!((cur_temp + rmt_btn[i]) > goal_temp))
			dfs(cur_temp + rmt_btn[i], count + 1);
	}
}