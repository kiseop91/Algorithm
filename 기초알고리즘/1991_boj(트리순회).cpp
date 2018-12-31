#include <iostream>
using namespace std;
int tree[27][2];
void PreOdrer(char node)
{
	if (node == -1)
		return;
	cout << (char)(node + 'A');
	PreOdrer(tree[node][0]);
	PreOdrer(tree[node][1]);
}
void InOdrer(char node)
{
	if (node == -1)
		return;
	InOdrer(tree[node][0]);
	cout << (char)(node + 'A');
	InOdrer(tree[node][1]);
}
void PostOdrer(char node)
{
	if (node == -1)
		return;
	PostOdrer(tree[node][0]);
	PostOdrer(tree[node][1]);
	cout << (char)(node + 'A');
}
int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		char node, left, right;
		cin >> node >> left >> right;
		node -= 'A';
		if (left == '.')
			tree[node][0] = -1;
		else
			tree[node][0] = left - 'A';

		if (right == '.')
			tree[node][1] = -1;
		else
			tree[node][1] = right - 'A';
	}
	PreOdrer(0);
	cout << endl;
	InOdrer(0);
	cout << endl;
	PostOdrer(0);
	return 0;
}
