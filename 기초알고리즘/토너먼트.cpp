#include <iostream>
using namespace std;
int main()
{
	int n, kim, im;
	int count = 0;
	cin >> n >> kim >> im;
	while (kim != im) {
		kim = kim / 2 + kim % 2;
		im = im / 2 + im % 2;
		count++;
	}
	cout << count << endl;

	return 0;
}
