// 연구활동가는길 (외판원순환문제와 비슷함.)
// dfs로 해결함.
// 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool chk[10];
vector<pair<int, int>> vertex[11]; //간선의 가중치를 저장할 자료구조가 필요하다.
int n, m;						   //정점의수, 간선의수
int res = 9999999;
void dfs(int x, int sum);

int main()
{

	cin >> n >> m;

	for (int i = 0; i < m; i++)  //간선정보입력
	{
		int x, y, val;
		cin >> x >> y >> val;
		vertex[x].push_back(make_pair(y, val));  //pair자료구조로 간선정보를 저장.
		vertex[y].push_back(make_pair(x, val));  //양방향 그래프이므로 잊지말자.
	}

	dfs(1, 0);  //처음에 틀린이유. ㅡㅡ; 0이 아니라 습관처럼 res를 넣었음..
	if (res == 9999999)
		cout << -1 << endl;
	else
		cout << res << endl;

	return 0;
}

void dfs(int v, int sum)
{
	chk[v] = true;
	if (v == n) //목적지 도착 최종값확인후 리턴;
	{
		if (sum < res) {
			res = sum;
			return;
		}
		return;
	}

	for (int i = 0; i < vertex[v].size(); i++) //x에 연결된 모든 정점을 확인한다.
	{
		int nv = vertex[v][i].first;
		if (chk[nv] == false) { //다음갈곳이 방문을 안한곳이라면.
		//	chk[nv] = true;
			dfs(nv, vertex[v][i].second + sum);
			chk[nv] = false;  //빠져나올때 다시 체크해제하기.

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
