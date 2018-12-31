#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while (getline(cin, s))
	{
		int a = 0, A = 0, n = 0, sp = 0;
		//소문자 대문자, 숫자 공백 출력
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] >= 'a'&& s[i] <= 'z')
				a++;
			if (s[i] >= 'A'&& s[i] <= 'Z')
				A++;
			if (s[i] >= '0'&& s[i] <= '9')
				n++;
			if (s[i] == ' ')
				sp++;
		}
		cout << a << " " << A << " " << n << " " << sp << endl;
	}

	return 0;
}