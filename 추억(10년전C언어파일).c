#include <stdio.h>
int ArrAdder(int* pArr, int n);
int SumOfArr;
int main(void)

{
	int arr[6];

	//�迭 �� 6��������������?int SumOfArr;
	printf("           �ٶ��� �׽�Ʈ!!\n");
	printf("          ����� �ٶ���� ��������ϱ��?!!!\n");
	printf("       ������ �а� ��� �������������ð� \n");
	printf("   ���������� �������°��� �Է����ּ���\n");

	printf("\n"); printf("\n"); printf("\n"); printf("\n");

	printf("1��\n");
	printf(" �����ߴٰ� ���ƿ� ���! ��ǿ� ���ϴ�.\n");
	printf(" �׸��� ������ó�� ������ �Ϸ��մϴ�. �̶������?!\n");

	printf("\n");
	printf("\n");

	printf("1. �ݵ�� ���� ���� �Ĵ´�.\n");
	printf("2. ���� �İ� ���� �״�����...\n");

	scanf(" %d", &arr[0]);

	printf("\n"); printf("\n"); printf("\n");

	printf("2��\n");
	printf("������ �ϱ����� ��ǻ�͸� Ų���.. �̶��ൿ��?\n");
	printf("1. �������â�� 2�����ϴ�.\n");
	printf("2. ���������� 3���� �̻���â�� ����д�.\n");
	scanf(" %d", &arr[1]);

	printf("3��\n");
	printf("����� �������迡�� �ֽ� ���θ� �����Խ��ϴ�. �÷��̹�ư�� ������ �ൿ��?\n");
	printf("1. ������������.\n");
	printf("2. �������� ���������Ѱܹ�����.\n");
	scanf(" %d", &arr[2]);

	printf("4��\n");
	printf("��ȭ�� �������ϴ�. �ڽ��� ������� ��ȭ�� 2�ð��� ��ٷ����մϴ�. �����?\n");
	printf("1. ����������� ��ٷȴ� ����.\n");
	printf("2. �ð��� �´� ���α׷��� ����.\n");
	scanf(" %d", &arr[3]);

	printf("5��\n");
	printf("�ѵ��� ������ ���� ��ſ��� ������ ���̻���ϴ�.\n���� ì��� �������� ����� ���ƿ� ������?\n");
	printf("1. �ʿ� ���� ���𰡸� �߰��ߴ�.\n");
	printf("2. ���� ������ ����� �Ծ��� ���̱⶧����.\n");
	scanf(" %d", &arr[4]);

	printf("6��\n");
	printf("���ΰ� ������ ������. ���ǰ��� 7120���� �������� ����� �ൿ�� ?\n");
	printf("1. ���������� ���� ���� �����Ѵ�.\n");
	printf("2. ���� ���������� �����Ƿ� ����� �����Ѵ�..\n");
	scanf("%d", &arr[5]);
	printf("\n"); printf("\n"); printf("\n");


	SumOfArr = ArrAdder(arr, sizeof(arr) / sizeof(int));  //ArrAdder �Լ��� ȣ���Ѵ�
	printf(" ���� : %d \n", SumOfArr);  //ù���ڴ� �迭���̸�, �� ��° ���ڷ� ���� �ϴ� ���� �迭�� ����̴�

	if (SumOfArr >= 7)		//if���� ����Ͽ� �������������� �򰡸�������
		printf(" ����� ������! ������!\n");
	else if (SumOfArr >= 9)
		printf(" �ٶ����̱����̺�����. \n");
	else if (SumOfArr >= 12)
		printf(" ����� �������� �ٶ�����! \n");

	return 0;
}




int ArrAdder(int* pArr, int n)  // ArrAdder �Լ�

{
	int sum = 0;
	int i;
	for (i = 0; i < n; i++)  //for���� �Ͽ��Ͽ� ���� �ջ��Ѵ�.
		sum += pArr[i];
	return sum;
}