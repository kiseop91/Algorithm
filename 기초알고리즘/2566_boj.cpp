#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int num[10][10];
int res = 0;
pair<int, int> xy;
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cin >> num[i][j];
			if (res < num[i][j]) {
				res = num[i][j];
				xy={ i,j };
			}
		}
	}
	cout << res << endl;
	cout << xy.first << " " << xy.second<< endl;
	return 0;
}