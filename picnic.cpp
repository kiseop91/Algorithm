#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
using namespace std;

int student_num, p_fnum, result;
bool areFriends[10][10] = { 0 };
bool taken1[10] = { 0 };

int countPairngs(bool taken[10])
{
	int firstFree = -1;
	for (int i = 0; i < student_num; i++)
	{
		if (!taken[i]) {
			firstFree = i;
			break;
		}
	}


	if (firstFree == -1) return 1;
	int ret = 0;

	for (int pairWith = firstFree + 1; pairWith < student_num; ++pairWith) {
		if (!taken[pairWith] && areFriends[firstFree][pairWith]) {
			taken[firstFree] = taken[pairWith] = true;
			ret += countPairngs(taken);
			taken[firstFree] = taken[pairWith] = false;
		}
	}
	return ret;
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		memset(areFriends, 0, sizeof(areFriends));
		cin >> student_num >> p_fnum;
		for (int i = 0; i < p_fnum; i++)
		{
			int p1, p2;
			cin >> p1 >> p2;
			areFriends[p1][p2] = 1;
			areFriends[p2][p1] = 1;
		}
		cout << countPairngs(taken1) << endl;

	}

	return 0;
}