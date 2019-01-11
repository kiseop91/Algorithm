#include <string>
#include <vector>
using namespace std;
int solution(vector<int> numbers, int target) {
	int answer = 0;
	int n = numbers.size();
	for (int i = 0; i < (1 << n); i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			if (i & (1 << j))
				sum += numbers[j];
			else
				sum += numbers[j] * -1;
		}
		if (sum == target)
			answer++;
	}
	return answer;
}