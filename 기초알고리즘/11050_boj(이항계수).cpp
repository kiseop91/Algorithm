#include <iostream>
#include <memory.h> ///memset
using namespace std;
long long D[1000][1000];

long long C(int n, int r) {
	if (r == 0 || r == n)///종료 조건(가장 작은 부분문제)
		return D[n][r] = 1;
	if (D[n][r] != -1)///중복 계산 방지
		return D[n][r];///이미 계산했으면 계산한 값 쓰기
	return D[n][r] = C(n - 1, r) + C(n - 1, r - 1);///점화식, 메모이제이션
}

int main()
{
	int n, r;
	cin >> n >> r;
	memset(D, -1, sizeof(D));///초기화
	C(n, r);
	cout << D[n][r] << endl;
}
