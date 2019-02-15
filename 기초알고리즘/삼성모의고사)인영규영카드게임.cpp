#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
//9!  = 362,880 
const int fact = 362880;
int main() {
	int n;
	cin >> n;
	for (int tc = 1; tc <= n; tc++)
	{

		register int a[9];
		register int b[9];
		bool chk[19] = { 0 };
		for (int i = 0; i < 9; i++) {
			cin >> a[i];
			chk[a[i]] = true;
		}

		register int c = 0;
		for (int i = 1; i <= 18; i++)
		{
			if (chk[i] == false) {
				b[c] = i;
				c++;
			}
		}

		register int win = 0;
		register int lose = 0;
		register int a_score = 0;
		register int b_score = 0;

		do
		{
			a_score = 0;
			b_score = 0;

			for (int i = 0; i < 9; i++)
			{
				if (a[i] > b[i])
					a_score += a[i] + b[i];
				/*			else if (a[i] < b[i])
								b_score += a[i] + b[i];*/

				if (a_score >= 86) {
					win++;
					break;
				}

			}
			/*		if (a_score > b_score)
						win++;
					if (a_score < b_score)
						lose++;*/

		} while (next_permutation(b, b + 9));

		//cout << "#" << tc << " " << win << " " << fact - win << endl;
	}


	return 0;
}