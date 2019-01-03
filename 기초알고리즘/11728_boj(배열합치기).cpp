#include <iostream>
using namespace std;
//배열합치기
int a[1000001];
int b[1000001];
int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
		cin >> a[i];
	for (int i = 0; i < m; i++)
		cin >> b[i];

	int ac = 0;
	int bc = 0;
	for (int i = 0; i < m + n; i++)
	{

		if (a[ac] > b[bc])
		{
			if (bc >= m)
				cout << a[ac++] << " ";

			else
				cout << b[bc++] << " ";
		}
		else
		{
			if (ac >= n)
				cout << b[bc++] << " ";
			else
				cout << a[ac++] << " ";
		}
	}


	return 0;
}