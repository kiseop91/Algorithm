#include <iostream>
using namespace std;
//�迭��ġ��
int map[1000001];
int b[1000001];
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> map[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];

	int ac = 0;
	int bc = 0;
	for (int i = 0; i < m + n; i++)
	{

		if (map[ac] > b[bc])
		{
			if (bc >= m)
				cout << map[ac++] << " ";

			else
				cout << b[bc++] << " ";
		}
		else
		{
			if (ac >= n)
				cout << b[bc++] << " ";
			else
				cout << map[ac++] << " ";
		}
	}


	return 0;
}