#include <iostream>
#include <memory.h> ///memset
using namespace std;
long long D[1000][1000];

long long C(int n, int r) {
	if (r == 0 || r == n)///���� ����(���� ���� �κй���)
		return D[n][r] = 1;
	if (D[n][r] != -1)///�ߺ� ��� ����
		return D[n][r];///�̹� ��������� ����� �� ����
	return D[n][r] = C(n - 1, r) + C(n - 1, r - 1);///��ȭ��, �޸������̼�
}

int main()
{
	int n, r;
	cin >> n >> r;
	memset(D, -1, sizeof(D));///�ʱ�ȭ
	C(n, r);
	cout << D[n][r] << endl;
}
