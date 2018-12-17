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
	//ã�� ���Ұ� ������ end()�� ��ȯ�մϴ�.
	auto it = find(Number.begin(), Number.end(), 3); 
	cout << " ��ġ : " << (it - Number.begin()) << "  ã�� �� :" << *it << endl;


	it = find_if(Number.begin(), Number.end(), [](int x) {return 3 < x; });
	cout << " ��ġ : " << (it - Number.begin()) << "  3���� ū���� ? " << *it << endl;


	return 0;

}