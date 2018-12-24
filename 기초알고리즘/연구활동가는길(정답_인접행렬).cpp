#include <stdio.h>
int n, m, G[11][11], sol = 0x7fffffff, chk[11];

void solve(int v, int w)
{
	if (v == n)
	{
		if (w < sol)
			sol = w;
		return;
	}
	for(int i=1; i<=n; i++)
		if (!chk[i] && G[v][i])
		{
			chk[i] = 1;
			solve(i, w + G[v][i]);
			chk[i] = 0;
		}
}

int main(void)
{
	scanf_s("%d %d", &n, &m);
	for (int i = 0; i < m; i++)
	{
		int s, e, w;
		scanf_s("%d %d %d", &s, &e, &w);
		G[s][e] = G[e][s] = w;
	}
	solve(1, 0);
	printf("%d\n", sol == 0x7fffffff ? -1 : sol);
	return 0;


}