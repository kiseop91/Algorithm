#include <iostream>
using namespace std;
int chkPrime[1000001];

void primeNumber() {
	for (int i = 2; i*i < 1000000; i++)
	{
		if (chkPrime[i] == false)
		{
			for (int j = i * i; j < 1000000; j += i)
			{
				chkPrime[j] = true;
			}
		}
	}
	chkPrime[1] = true;
}

void gold(int n)
{
	int i, j, mid = n >> 1;
	for (i = 0, j = n; i <= mid; i++, j--)
	{
		if (i % 2 == 1 && j % 2 == 1 && !chkPrime[i] && !chkPrime[j]) {
			printf("%d = %d + %d\n", n, i, j);
			return;
		}
	}
	puts("Goldbach's conjecture is wrong.\n");
}

int main()
{
	primeNumber();
	int n;
	while (true)
	{
		scanf("%d", &n);
		if (!n) break;
		gold(n);
	}

	return 0;
}
