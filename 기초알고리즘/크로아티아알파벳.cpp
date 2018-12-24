#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	string input;
	string arr[] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	int tmp = 0, count = 0;
	getline(cin, input);
	for (int i = 0; i < input.length(); i++) {
		for (int j = 0; j < 8; j++) {
			if (input.find(arr[j]) != string::npos) {
				int k = 0;
				k = input.find(arr[j]);
				input.erase(k, arr[j].length());
				input.insert(k, "*");
			}
		}
	}
	cout << input.length() << endl;
	return 0;
}