#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int node[5001];//����� ������

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
	//���帹�� ������ ���� ����� �������� 4�̻��̰�,  4�̻��� ������������ ��尡 2���̻��̸� 0(�Ұ���) ,
	// 1���̰�,  2�̻��� ������ ������ ��尡 ���帹�� ������ ������ ����� �ڽĳ���̸�  ���帹�� ������������ ��带 �����ϸ�ȴ�.
	// ���帹�� ������ ���� ��尡 �������� 3�϶�,  3���ǰ����� ���� ��尡 2�����  �� �� ����� ���� ���
	// �������� ��� 2����� ����� ��ü���� �����Ѵ�.

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