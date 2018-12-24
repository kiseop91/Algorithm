// ����Ȱ�����±� (���ǿ���ȯ������ �����.)
// dfs�� �ذ���.
// 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool chk[10];
vector<pair<int, int>> vertex[11]; //������ ����ġ�� ������ �ڷᱸ���� �ʿ��ϴ�.
int n, m;						   //�����Ǽ�, �����Ǽ�
int res = 9999999;
void dfs(int x, int sum);

int main()
{

	cin >> n >> m;

	for (int i = 0; i < m; i++)  //���������Է�
	{
		int x, y, val;
		cin >> x >> y >> val;
		vertex[x].push_back(make_pair(y, val));  //pair�ڷᱸ���� ���������� ����.
		vertex[y].push_back(make_pair(x, val));  //����� �׷����̹Ƿ� ��������.
	}

	dfs(1, 0);  //ó���� Ʋ������. �Ѥ�; 0�� �ƴ϶� ����ó�� res�� �־���..
	if (res == 9999999)
		cout << -1 << endl;
	else
		cout << res << endl;

	return 0;
}

void dfs(int v, int sum)
{
	chk[v] = true;
	if (v == n) //������ ���� ������Ȯ���� ����;
	{
		if (sum < res) {
			res = sum;
			return;
		}
		return;
	}

	for (int i = 0; i < vertex[v].size(); i++) //x�� ����� ��� ������ Ȯ���Ѵ�.
	{
		int nv = vertex[v][i].first;
		if (chk[nv] == false) { //���������� �湮�� ���Ѱ��̶��.
		//	chk[nv] = true;
			dfs(nv, vertex[v][i].second + sum);
			chk[nv] = false;  //�������ö� �ٽ� üũ�����ϱ�.

		}
	}

}

//
//7 11
//1 2 47
//1 3 69
//2 4 57
//2 5 124
//3 4 37
//3 5 59
//3 6 86
//4 6 27
//4 7 94
//5 7 21
//6 7 40
