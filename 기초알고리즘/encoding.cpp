#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int binaryString_to_Int(string s, int sum);

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string decoding = "";
		string res = "";
		string s;

		cin >> s;
		
		for (int i = 0; i < s.length(); i++)
		{
			bitset<6> a = (int)s[i]+ 65;
			decoding += a.to_string();   //6bit로된 수를 연속해서 다붙임. 10101011010101......
		}
		for (int i = 0; i <= decoding.length(); i++)
		{
			res += decoding[i];
			if (i % 8 ==7 )
			{
				//8개씩 잘라서 숫자로변환.
				cout<<(char)binaryString_to_Int(res, 0);
				res = "";
			}
		}
		cout << endl;
	}

	return 0;
}


int binaryString_to_Int(string s, int sum)
{
	for (int i = 1; i <= s.length(); i++)
	{
		if (i == 1) {
			int a = s[s.length() - i] - 48;
			if (s[s.length() - i] - 48 == 1)
				sum++;
		}
		else
		{
			int a = s[s.length() - i] - 48;
			sum += (a)* pow(2, i - 1);
		}
	}
	return sum;
}