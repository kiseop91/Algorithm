#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main()
{
	//priority_queue<int,vector<int>,greater<int>> q;
	priority_queue<int> q;
	q.push(5);
	q.push(1);
	q.push(3);
	q.push(2);
	q.push(9);
	q.push(11);

	int range = q.size();
	for (int i = 0; i < range; i++) {
		cout << q.top() << endl;
		q.pop();
	}

	return 0;
}