#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

struct Student {
	int age;
	string name;
};
vector<Student> p(100001);
Student p2[100001];
bool cmp(const Student &u, const Student &v)
{
	return u.age < v.age;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> p2[i].age >> p2[i].name;

	stable_sort(p2, p2 + n, cmp);

	for (int i = 0; i < n; i++)
		cout << p2[i].age << " " << p2[i].name << endl;

	return 0;
}