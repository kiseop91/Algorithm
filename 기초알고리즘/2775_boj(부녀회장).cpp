#include <iostream>
using namespace std;

int main()
{
	int room[15][14] = { 0 };
	for (int i = 0; i < 14; i++)
	{
		room[0][i] += i + 1;
		room[i + 1][0] = 1;
	}

	for (int i = 1; i < 14; i++)
		for (int j = 1; j < 15; j++)
			room[j][i] = room[j][i - 1] + room[j - 1][i];

	int t;
	cin >> t;

	int k, m;
	while (t--)
	{
		scanf("%d \n %d", &k, &n);
		printf("%d\n", room[k][n - 1]);
	}
	return 0;
}