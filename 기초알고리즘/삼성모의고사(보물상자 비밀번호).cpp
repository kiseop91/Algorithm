#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

set<int> res;
void solve(string pwd_to_Int, string password, int div)
{
	for (int i = 0; i < password.length(); i++)
	{
		pwd_to_Int = pwd_to_Int + password[i];
		if (i%div == div - 1)
		{
			pwd_to_Int.insert(0, "0x");
			int a = stod(pwd_to_Int);
			res.insert(a);
			pwd_to_Int = "";
		}
	}
}

int main()
{
	int tc = 0;
	cin >> tc;
	for (int t = 1; t <= tc; t++)
	{
		int n = 0;
		int k = 0;
		cin >> n >> k;  // ���ڰ���, k��°��
		int rotate = (n / 4) - 1;
		int div = (n / 4); //�߶���ϴ� ���ڱ���
		string password;
		cin >> password;

		//To DO : �������¿��� ��й�ȣ���ϱ�.
		solve("", password, div);

		//������ �� ��й�ȣ���ϱ�.
		for (int i = 0; i < rotate; i++)
		{
			string back = "";
			back = back + password.back();
			password.pop_back();
			password.insert(0, back);
			solve("", password, div);
		}
		int cnt = 1;
		int lo = res.size() - k + 1;
		for (auto it = res.begin(); it != res.end(); it++) {
			if (cnt == lo)
				cout << "#" << t << " " << *it << endl;
			cnt++;
		}
		res.clear();
	}

	return 0;
}