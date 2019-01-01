#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <tuple>
using namespace std;

struct Student {
	string name;
	int kor;
	int eng;
	int math;
};
vector<Student> p(100001);
Student p2[100001];
bool cmp(const Student &u, const Student &v)
{
	if (u.kor > v.kor) {
		return true;
	}
	else if (u.kor == v.kor) {
		if (u.eng < v.eng) {
			return true;
		}
		else if (u.eng == v.eng) {
			if (u.math > v.math) {
				return true;
			}
			else if (u.math == v.math) {
				return u.name < v.name;
			}
		}
	}
	return false;
}
bool cmp2(const Student &u, const Student &v)
{
	return make_tuple(-u.kor, u.eng, -u.math, u.name) < make_tuple(-v.kor, v.eng, -v.math, v.name);
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> p2[i].name >> p2[i].kor >> p2[i].eng >> p2[i].math;

	sort(p2, p2 + n, cmp2);

	for (int i = 0; i < n; i++)
		cout << p2[i].name << '\n';

	return 0;
}