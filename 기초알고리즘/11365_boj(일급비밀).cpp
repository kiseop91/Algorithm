#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	string str;

	while (getline(cin, str))
	{
		if (str == "END")
			break;

		for (auto it = str.end() - 1; it != str.begin(); it--)
		{
			cout << *it;
		}
		cout << str[0];
		cout << '\n';
	}


	return 0;
}