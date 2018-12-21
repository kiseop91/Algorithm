#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long> info_TodayPrice(1000001, 0);

int main()
{
	int t;
	scanf_s("%d", &t);
	for (int tc = 1; tc <= t; tc++)
	{
		int n;
		long long most_exp = 0;
		long long res = 0;
		long long current_num = 0;
		scanf_s("%d", &n);
		for (int i = 0; i < n; i++)
		{
			scanf_s("%lld", &info_TodayPrice[i]);
		}
		for (int i = n - 1; i >= 0; i--)
		{
			if (info_TodayPrice[i] >= most_exp)  //���øŸŰ��� ������ִ�ŸŰ����� ũ�ٸ�
			{
				res += current_num * most_exp; //�ִ밡�� * �������ִ¹��Ǽ��� �Ǵ�.
				current_num = 0;  //���Ⱦ�����,���� �������ִ� ���Ǽ��� 0�� �ȴ�.
				most_exp = info_TodayPrice[i];  //�ִ밪 ����
			}
			else //�ƴ϶�� ���Ÿ� �Ѵ�.
			{
				current_num++; //�Ѱ�������
				//������ ���ݸ�ŭ���ſ�����������  res�������ش�.
				res -= info_TodayPrice[i];
			}
			if (i == 0) //�������ִ°��� ����Ⱦƾ���.
			{
				res += current_num * most_exp;
				current_num = 0;
			}
		}

		cout << "#" << tc << " " << res << endl;//������
	}
	return 0;
}