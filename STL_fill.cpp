#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector <int> Number{ 1,3,3,3,9,10,11 };

	cout << "Number�� ���� : ";
	for (auto &x : Number)
	{
		cout << x << " ";
	}
	cout << endl;

	fill(Number.begin(), Number.end(), 9);

	cout << "Number�� ���� : ";
	for (auto &x : Number)
	{
		cout << x << " ";
	}
	cout << endl;


	return 0;

}