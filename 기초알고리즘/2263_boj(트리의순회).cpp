#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
using namespace std;

int inorder[100001];
int postorder[100001];
int position[100001];

void solve(int i_start, int i_end, int p_start, int p_end)
{
	if (i_start > i_end || p_start > p_end) return;
	int root = postorder[p_end];
	int ir = position[root]; // 인오더에서 루트의 위치
	int left = ir - i_start;
	printf("%d ", root);
	solve(i_start, ir - 1, p_start, p_start + left - 1);
	solve(ir + 1, i_end, p_start + left, p_end - 1);
}
int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> inorder[i];
	for (int i = 0; i < n; i++)
		cin >> postorder[i];
	for (int i = 0; i < n; i++)
		position[inorder[i]] = i;

	solve(0, n - 1, 0, n - 1);

	return 0;
}