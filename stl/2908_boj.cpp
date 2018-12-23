#include <iostream>
#include <string>
using namespace std;

int main() {

	string a, b;
	bool c;
	cin >> a >> b;

	for (int i = 0; i < a.length(); i++)
	{
		if (a[2 - i] == b[2 - i])
			continue;
		else if (a[2 - i] > b[2 - i])
		{
			c = 1;
			break;
		}
		else {
			c = 0;
			break;
		}
	}
	if (c == 1)
	{
		for (int i = 0; i < a.length(); i++)
		{
			cout << a[2 - i];
		}
	}
	else {
		for (int i = 0; i < a.length(); i++)
		{
			cout << b[2 - i];
		}
	}
	return 0;
}