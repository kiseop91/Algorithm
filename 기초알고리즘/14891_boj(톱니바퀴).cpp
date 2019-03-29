#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int res = 0;
int k;
deque<int> t[5];

//극이 다르면, 회전방향의 반대로, 같으면 회전하지않는다.
int pow(int a, int b);
void Lrotate(deque<int>& q); //반시계 -1
void Rrotate(deque<int>& q); //시계  1
void init();
void calculate();
void rcheck(int r, int rd, int ik);
void lcheck(int l, int ld, int ik);

int main() {

	init();
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		int num, dir;
		cin >> num >> dir;

		int l = t[num][6];  // 오른쪽
		int r = t[num][2];  // 왼쪽

		if (dir == 1)       // 회전!
			Rrotate(t[num]);
		else if (dir == -1)
			Lrotate(t[num]);

		rcheck(r, dir, num + 1); //회전후 오른쪽 톱니체크
		lcheck(l, dir, num - 1); //회전후 왼쪽 톱니체크

	}

	//회전 완료후, 정답 계산 부분.
	calculate();
	cout << res << endl;

	return 0;
}

void lcheck(int l, int ld, int ik)
{
	for (; ik >= 1; ik--)  //왼쪽체크
	{
		if (l == t[ik][2]) // 같으면 안돔.
			break;
		else
		{
			if (ld == 1) {
				l = t[ik][6];
				Lrotate(t[ik]);
				ld *= -1;
			}
			else
			{
				l = t[ik][6];
				Rrotate(t[ik]);
				ld *= -1;
			}
		}
	}
}

void rcheck(int r, int rd, int ik)
{
	for (; ik <= 4; ik++)  //오른쪽 체크
	{
		if (r == t[ik][6]) // 같으면 안돔.
			break;
		else
		{
			if (rd == 1) {
				r = t[ik][2];
				Lrotate(t[ik]);
				rd *= -1;
			}
			else
			{
				r = t[ik][2];
				Rrotate(t[ik]);
				rd *= -1;
			}
		}
	}
}

void calculate()
{

	for (int i = 1; i <= 4; i++)
	{
		if (t[i][0])
		{
			res += pow(2, i - 1);
		}
	}
}

void init()
{
	string s;
	for (int idx = 1; idx <= 4; idx++) {
		cin >> s;
		for (int i = 0; i < 8; i++)
		{
			t[idx].push_back(s[i] - 48);
		}
	}
}

void Rrotate(deque<int>& q) //시계  1
{
	int tmp = q.back();
	q.pop_back();
	q.push_front(tmp);
}

void Lrotate(deque<int>& q) //반시계 -1
{
	int tmp = q.front();
	q.pop_front();
	q.push_back(tmp);
}

int pow(int a, int b)
{
	int res = 1;
	for (int i = 1; i <= b; i++)
	{
		res = res * a;
	}
	return res;
}