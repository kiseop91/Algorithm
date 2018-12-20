#include <iostream>
using namespace std;
int p[1000001];
int pn;
bool c[1000001];
int main()
{
	int m, n;
	cin >> m >> n;

	for (int i = 2; i <= 1000000; i++)  //n까지 소수찾기
	{
		if (c[i] == false)
		{
			p[pn++] = i;
			for (int j = i + i; j <= 1000000; j += i)
			{
				c[j] = true;
			}
		}
	}
	for (int i = 0; i < 1000000; i++)
	{
			printf("%d\n", p[i]);
		if (p[i] > n)
			break;
		

	}

	return 0;
}