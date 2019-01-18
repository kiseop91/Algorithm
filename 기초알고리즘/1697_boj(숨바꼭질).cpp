#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int bfs(int s, int e) {
	queue<int> q;
	int check[100005];
	memset(check, -1, sizeof(check));
	q.push(s);
	check[s] = 1;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		if (cur - 1 >= 0 && (check[cur - 1] < 0 || check[cur - 1] > check[cur] + 1))
			q.push(cur - 1), check[cur - 1] = check[cur] + 1;
		if (cur + 1 <= 100000 && (check[cur + 1] < 0 || check[cur + 1] > check[cur] + 1))
			q.push(cur + 1), check[cur + 1] = check[cur] + 1;
		if (cur * 2 <= 100000 && (check[cur * 2] < 0 || check[cur * 2] > check[cur] + 1))
			q.push(cur * 2), check[cur * 2] = check[cur] + 1;
	}
	return check[e] - 1;
}
int main() {
	int s, e;
	cin >> s >> e;
	cout << bfs(s, e);
	return 0;
}
