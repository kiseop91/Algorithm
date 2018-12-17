#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector <int> Number{ 1,3,3,3,9,10,11 };

	cout << "Number의 정보 : ";
	for (auto &x : Number)
	{
		cout << x << " ";
	}
	cout << endl;
	//찾는 원소가 없으면 end()를 반환합니다.
	auto it = find(Number.begin(), Number.end(), 3); 
	cout << " 위치 : " << (it - Number.begin()) << "  찾는 값 :" << *it << endl;


	it = find_if(Number.begin(), Number.end(), [](int x) {return 3 < x; });
	cout << " 위치 : " << (it - Number.begin()) << "  3보다 큰값은 ? " << *it << endl;


	return 0;

}