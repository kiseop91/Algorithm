#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int> Number{ 1,1,1,2,4,4,5,6,7,8,9 };

	cout << "Number 정보 : ";
	for (auto& x : Number)
		cout << x << " ";
	cout << endl;


	for (int i = 1; i <= 9; i++)
		cout <<" "<< i <<"의 개수 : "<<count(Number.begin(), Number.end(), i) << endl;

	cout << "짝수의 개수 : ";
	cout << count_if(Number.begin(), Number.end(), [](int &x) {return x % 2 == 0; }) << endl;;
	cout << "홀수의 개수 : ";
	cout << count_if(Number.begin(), Number.end(), [](int &x) {return x % 2 == 1; }) << endl;;


	return 0;
}