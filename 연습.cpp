#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int node[5001];//연결된 간선수

int solution(int n, vector<vector<int>> edges) {
	int answer = 0;

	vector<int> v[5001];
	for (int i = 0; i < edges.size(); i++) {
		v[edges[i][0]].push_back(edges[i][1]);
		v[edges[i][1]].push_back(edges[i][0]);
	}
	int cnt = 0;
	for (int i = 1; i <= n; i++) {
		if (v[i].size() > 2) {
			cnt++;
			//edges.erase(edges.begin() + i);
			node[i] = v[i].size();
		}
	}
	//가장많은 간선을 가진 노드의 간선수가 4이상이고,  4이상의 간선을가지는 노드가 2개이상이면 0(불가능) ,
	// 1개이고,  2이상의 간선을 가지는 노드가 가장많은 간선을 가지는 노드의 자식노드이면  가장많은 간선을가지는 노드를 제거하면된다.
	// 가장많은 간선을 가진 노드가 간선수가 3일때,  3개의간선을 가진 노드가 2개라면  그 두 노드의 합을 출력
	// 간선수가 모두 2개라면 노드의 전체합을 리턴한다.

	//cout<<edges
	cout << cnt;
	return answer;
}


int main()
{
	vector<vector<int>> edges;
	edges = { {1, 2}, { 1, 3 }, { 2, 3 }, { 2, 4 }, { 3, 4 } };
	//edges = { {1, 2}, { 2, 3 }, { 3, 4 }, { 4, 5 }, { 5, 6 }, { 6, 7 }, { 7, 8 }, { 8, 1 }, { 2, 7 }, { 3, 6 }};
	solution(4, edges);

	return 0;
}