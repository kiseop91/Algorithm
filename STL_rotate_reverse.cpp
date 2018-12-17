#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector <int> Number{ 1,2,3,4,5,6,7 };

	cout << "Number의 정보 : ";
	for (auto &x : Number)
	{
		cout << x << " ";
	}
	cout << endl;

	reverse(Number.begin(), Number.end());

	cout << "Number의 정보 : ";
	for (auto &x : Number)
	{
		cout << x << " ";
	}
	cout << endl;

	rotate(Number.begin(), Number.begin() + 3, Number.end());

	cout << "Number의 정보 : ";
	for (auto &x : Number)
	{
		cout << x << " ";
	}
	cout << endl;


	return 0;

}