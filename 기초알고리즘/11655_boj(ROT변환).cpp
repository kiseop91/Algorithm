#include <iostream>
#include <string>
using namespace std;
string S = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";//26��
string s = "abcdefghijklmnopqrstuvwxyz";
int main()
{
	string input;
	getline(cin, input);

	for (int i = 0; i < input.size(); i++)
	{
		if ('A' <= input[i] && 'Z' >= input[i])  //�빮�ڹ������ִٸ�
		{
			int location = (input[i] - 'A' + 13) % 26;
			cout << S[location];
		}
		else if ('a' <= input[i] && 'z' >= input[i]) //�ҹ��ڹ������ִٸ�
		{
			int location = (input[i] - 'a' + 13) % 26;
			cout << s[location];
		}
		else
		{
			cout << input[i];
		}
	}


	return 0;
}