#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//Ǯ��  ���ڸ��������� 3�ǹ���̸� �׼��� 3�ǹ���̴�. �� ������ �̿��ؼ�, 123�� ���ڸ��������� 3�ǹ���̴� 
//      321 �� ������������ �������ָ� ����ū ���� �ȴ�.
int main()
{
	string s;
	cin >> s;
	int sum = 0;
	for (char c : s)
	{
		sum += c - '0';
	}
	sort(s.begin(), s.end());
	if (s[0] == '0' && sum % 3 == 0)
	{
		reverse(s.begin(), s.end());
		cout << s << endl;
	}
	else
		cout << "-1\n";

	return 0;

}
