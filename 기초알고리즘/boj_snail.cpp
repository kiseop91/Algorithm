#include <iostream>
#include <vector>
using namespace std;
//pair<int, int> point_xy;
struct point
{
	int x, y;
};


point solve(int n)
{
	point point{ 0, 0 }; //0부터시작 다음에 0.1 로간다.
	bool sign = true;   // 1 1 2 2 3 3 4 4... 로 증가한다. 방향이꺽일떄마다 부호를바꿔줘야함.
	int move = 1;
	while (1)   // 입력한 n이 0이될떄까지 무한반복
	{
		if (sign)  //양의부호일떄  x증가y증가는 위 방향과 우방향이다.
		{
			for (int i = 0; i < move; i++)  //방향꺽이기전까지 한칸씩이동
			{
				point.y += 1; //위방향 y++
				n--;  //한칸씩이동
				if (n == 0)
					return point;
			}
			for (int i = 0; i < move; i++)
			{
				point.x += 1;  //우로방향
				n--;
				if (n == 0)
					return point;
			}
		}
		else  //음의 부호일때  x감소,y감소  아래또는 좌방향
		{
			for (int i = 0; i < move; i++) {
				point.y -= 1;  //아래
				n--;
				if (n == 0)
					return point;
			}
			for (int i = 0; i < move; i++)
			{
				point.x -= 1;  //좌
				n--;
				if (n == 0)
					return point;
			}
		}
		move++; // 사이클마다 꺽이는곳이 증가함.
		sign = !sign; //꺽일때마다 증가 감소로 나뉨. 증가 증가 감소 감소 증가 증가 감소 감소....
	}
}

int main(void)
{
	int n;
	cin >> n;

	point result = solve(n);
	cout << result.x << " " << result.y << endl;
	return 0;

}