//  ������� S ����  121������.
//
//
#include <iostream>
using namespace std;
int map[101];
int res = 0;
int main()
{
	int n, k, tmp;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
		cin >> map[i];

	for (int i = 1; i <= n - k + 1; i++) // �׹���ũ�Ⱑ k �̴� Ž��������
	{                                    // �׹��� ©���� �κк��ʹ� �˻����ʿ����
		tmp = 0;                         // �׹��� ������ ��Ȯ�Ѱ��� �������ִ�.
		for (int j = i; j <= i + k - 1; j++) // �׹��� ũ�� k �����ȿ� ���� ������� ��������.
		{
			tmp += map[j];
		} 
		if (tmp > res)   
			res = tmp;
	}

	cout << res<<endl;
	return 0;
}