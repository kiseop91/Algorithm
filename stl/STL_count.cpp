#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> Number{ 1,1,1,2,4,4,5,6,7,8,9 };

	cout << "Number ���� : ";
	for (auto& x : Number)
		cout << x << " ";
	cout << endl;


	for (int i = 1; i <= 9; i++)
		cout <<" "<< i <<"�� ���� : "<<count(Number.begin(), Number.end(), i) << endl;

	cout << "¦���� ���� : ";
	cout << count_if(Number.begin(), Number.end(), [](int &x) {return x % 2 == 0; }) << endl;;
	cout << "Ȧ���� ���� : ";
	cout << count_if(Number.begin(), Number.end(), [](int &x) {return x % 2 == 1; }) << endl;;


	return 0;
}