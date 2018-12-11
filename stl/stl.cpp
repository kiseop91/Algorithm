#include <iostream>
using namespace std;

int solve(int s, int e,int k)
{
	//�̺�Ž���� ������ �ɰ��� �ʿ��Ѻκи� ��ӹ������ɰ���.
	int m;
	while (s <= e)
	{
		m = (s + e) / 2;

		if (m < k)
			s = m+1;
		else if (m == k)
			return m;
		else
			e = m-1;
	}

	return -1;
}

int main()
{
	int S[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int n; //�ڷ��� ����
	int k; //ã������ �ڷ�

	/*for (int i = 0; i < n; i++)
		cin >> S[i];*/

	cout << solve(0, 10, 11) << endl;

	return 0;
}

