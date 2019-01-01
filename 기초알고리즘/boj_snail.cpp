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
	point point{ 0, 0 }; //0���ͽ��� ������ 0.1 �ΰ���.
	bool sign = true;   // 1 1 2 2 3 3 4 4... �� �����Ѵ�. �����̲��ϋ����� ��ȣ���ٲ������.
	int move = 1;
	while (1)   // �Է��� n�� 0�̵ɋ����� ���ѹݺ�
	{
		if (sign)  //���Ǻ�ȣ�ϋ�  x����y������ �� ����� ������̴�.
		{
			for (int i = 0; i < move; i++)  //���ⲩ�̱������� ��ĭ���̵�
			{
				point.y += 1; //������ y++
				n--;  //��ĭ���̵�
				if (n == 0)
					return point;
			}
			for (int i = 0; i < move; i++)
			{
				point.x += 1;  //��ι���
				n--;
				if (n == 0)
					return point;
			}
		}
		else  //���� ��ȣ�϶�  x����,y����  �Ʒ��Ǵ� �¹���
		{
			for (int i = 0; i < move; i++) {
				point.y -= 1;  //�Ʒ�
				n--;
				if (n == 0)
					return point;
			}
			for (int i = 0; i < move; i++)
			{
				point.x -= 1;  //��
				n--;
				if (n == 0)
					return point;
			}
		}
		move++; // ����Ŭ���� ���̴°��� ������.
		sign = !sign; //���϶����� ���� ���ҷ� ����. ���� ���� ���� ���� ���� ���� ���� ����....
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