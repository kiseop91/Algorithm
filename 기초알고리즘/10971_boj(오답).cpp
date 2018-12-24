#include <iostream>
#include <vector>
using namespace std;
vector < pair<int, int>> vertex[11];
int n;
int chk[11];
void dfs(int v, int sum, int cnt);
int res = 2147483647;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int  v;
			cin >> v;
			if (v)
			{
				vertex[i].push_back(make_pair(j, v)); //�ܹ��� �׷���
			}

		}
	}
	for (int i = 1; i <= n; i++)
	{
		dfs(i, 0, 1);
	}

	cout << res << endl;
	return 0;
}
void dfs(int v, int sum, int cnt)
{
	if (cnt == n + 1)  //n���� ���ø� ��� ������ ��,
	{
		sum += vertex[v][1].second; //������ ������������ ó�� �����Ѱ����� ����.
		if (res > sum)  //�ּҰ��̸� ����
		{
			res = sum;
			sum = 0;
			return;
		}
		return;
	}

	for (int i = 0; i < vertex[v].size(); i++)
	{
		if (!chk[v])//�湮�� ���Ѱ��̶��.
		{
			chk[v] = 1;
			int next_v = vertex[v][i].first;
			dfs(next_v, sum + vertex[v][i].second, cnt + 1);
			chk[v] = 0;
		}
	}

}