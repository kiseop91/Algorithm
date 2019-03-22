#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	//양 후 반 양 후
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;

	int c2 = c * 2;
	bool chk = false;
	int maxVal = 0;
	if (x < y) {
		chk = true;
		maxVal = x;
	}
	else
		maxVal = y;
	int res = 0;
	if ((a + b) > c2)
	{
		res = c2 * maxVal;
		if (chk)
		{
			if (b < c2)
				res += ((y - x) * b);
			else
				res += ((y - x) * c2);
		}
		else
		{
			if (a < c2)
				res += ((x - y) * a);
			else
				res += ((x - y) * c2);
		}
	}
	else
		res = (a*x) + (b * y);
	cout << res << endl;

	return 0;
}