#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
	string input;
	vector<string> tem = { "-200", "-201","-198","-201" };
	vector<int> ans;

	for (int i = 0; i < tem.size(); i++)
	{
		bool flag = false;
		int cnt = 5;
		if (stoi(tem[i]) > 200 || stoi(tem[i]) < -200)
			continue;
		for (int j = i - 2; j <= i + 2; j++)
		{
			if (i == j || j<0 || j>tem.size() - 1) {
				cnt--;
				continue;
			}
			if (stoi(tem[j]) > 200 || stoi(tem[j]) < -200) {
				cnt--;
				continue;
			}
			if (stoi(tem[i]) >= stoi(tem[j]))
			{
				if (stoi(tem[i]) - stoi(tem[j]) < 3)
					flag = true;
			}
			if (stoi(tem[i]) < stoi(tem[j]))
			{
				if (stoi(tem[j]) - stoi(tem[i]) < 3)
					flag = true;
			}
		}
		if (cnt == 0 || flag)
			ans.push_back(stoi(tem[i]));
	}

	if (ans.size() == 0)
		cout << "ERROR";
	else
	{
		int t = 0;
		for (auto x : ans)
			t += x;
		cout << t / static_cast<int>(ans.size());
	}

	return 0;
}
