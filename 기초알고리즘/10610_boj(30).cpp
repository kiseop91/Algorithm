#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//풀이  각자리수의합이 3의배수이면 그수는 3의배수이다. 그 성질을 이용해서, 123의 각자리수의합은 3의배수이니 
//      321 로 내림차순으로 정렬해주면 가장큰 값이 된다.
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
