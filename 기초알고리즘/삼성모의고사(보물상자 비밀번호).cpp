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
		cin >> n >> k;  // 숫자개수, k번째수
		int rotate = (n / 4) - 1;
		int div = (n / 4); //잘라야하는 문자길이
		string password;
		cin >> password;

		//To DO : 원본상태에서 비밀번호구하기.
		solve("", password, div);

		//돌렸을 때 비밀번호구하기.
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