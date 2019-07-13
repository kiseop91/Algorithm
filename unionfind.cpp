int parent[101];

int Find(int x)
{
	if (x == parent[x])
		return x;
	else
	{
		int y = Find(parent[x]);
		parent[x] = y;
		return y;
	}
}

//int Find(int x) {
//	if (x == parent[x]) {
//		return x;
//	}
//	else {
//		return parent[x] = Find(parent[x]);
//	}
//}

void Union(int x, int y)
{
	y = Find(y);
	x = Find(x);
	parent[y] = x;
}