#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int tc = 1; tc <= t; tc++)
	{
		int n; //
		cin >> n;
		vector<pair<long long, long long>> most_expensive;
		vector<pair<long long, long long>> selling;
		//pair<int, int> most_exp;
		for (int i = 0; i < n; i++)
		{
			long long tmp;
			cin >> tmp;//����
			selling.push_back(make_pair(tmp, i));         //���ݰ� ��¥ �Է�
			most_expensive.push_back(make_pair(tmp, i));  //���纻, (�����ؼ� ����)
		}
		//������������.
		sort(most_expensive.begin(), most_expensive.end()); //���� ��ѳ��� ����(��������) ����κ��Լ�����������.
		int cnum = 0; //���簡�����ִ¹��Ǽ�
		long long cmoney = 0; //������� �깰���ǰ�����
		long long res = 0; // �̵��� �Ѱ�
		pair<long long, long long> most_exp = most_expensive.back();
		for (int i = 0; i < n; i++)
		{

			if ((most_exp.second < selling[i].second ) && most_expensive.size()!=0 ) //�����Ѱ��ǳ�¥�� �������̸� �����Ѵ�.
			    	most_expensive.pop_back();
			if (most_exp.second ==selling[i].second) //���� ������ �����ѳ��̸� �������ִ°������Ǵ�. �ƹ��͵��Ȼ��.
			{
				res+=selling[i].first*cnum;	//�ȶ������� ���ð��ݿ� �������ִ¹������Ѽ�
				res = res - cmoney;//���ñ��������̺���.
				cmoney = 0; //���������� 0
				cnum = 0;	//���Ⱦ����Ƿ� �������ִ¹��Ǽ��� 0�̵ȴ�.
			    most_expensive.pop_back();
				if (most_expensive.size() != 0) {
					most_exp = most_expensive.back(); //�����ѳ����� ����
				}
			}
			else  // ������ �����ѳ��̾ƴ϶�� ������ ���.
			{
				cnum++; //���Ǽ� �߰�.
				cmoney += selling[i].first;//�̶����� �������춧�����Ǻ��
			}
		}

		//res = res - cmoney; // ���̵��� �ǰ��ݿ� �����Ѱ����� �����̴�.

		cout << "#" << tc<<" "<<res<<endl;//������
		//�������Ŀ� ����ʱ�ȭ
		res = 0;
		cmoney = 0;
		cnum = 0;
		most_expensive.clear();
		selling.clear();
	}
	return 0;
}