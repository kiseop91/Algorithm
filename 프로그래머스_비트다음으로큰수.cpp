#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
#include <bitset>
using namespace std;

int solution(int n) {
	int answer = 0;
	bitset<15> bit(n);

	for (int i = n + 1; i <= 1000000; i++)
	{
		bitset<15> bit2(i);
		if (bit.count() == bit2.count())
		{
			return i;
		}
	}

	return answer;
}

int main() {

	//cout << solution(78);
	string s = "12345678";
	//s.erase(6);
	s.erase(0, 1);
	cout << s;
	return 0;
}