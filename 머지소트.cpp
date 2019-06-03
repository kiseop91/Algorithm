#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
using namespace std;

int arr1[1000000];
int arr2[1000000];
int tmp[1000000];
int main() {

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> arr1[i];
	for (int i = 0; i < m; i++)
		cin >> arr2[i];

	int end = n + m - 1;
	int i = 0, j = 0, k = 0;

	while (i < n && j < m) {
		if (arr1[i] <= arr2[j]) tmp[k++] = arr1[i++];
		else tmp[k++] = arr2[j++];
	}
	while (i < n) tmp[k++] = arr1[i++];
	while (j < m) tmp[k++] = arr2[j++];

	for (int i = 0; i <= end; i++)
		cout << tmp[i] << " ";

	return 0;
}