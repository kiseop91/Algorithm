#include <stdio.h>
int ArrAdder(int* pArr, int n);
int SumOfArr;
int main(void)

{
	int arr[6];

	//배열 총 6가지질문설정함?int SumOfArr;
	printf("           바람기 테스트!!\n");
	printf("          당신의 바람기는 어느정도일까요?!!!\n");
	printf("       질문을 읽고 깊게 생각하지지마시고 \n");
	printf("   본능적으로 떠오르는것을 입력해주세요\n");

	printf("\n"); printf("\n"); printf("\n"); printf("\n");

	printf("1번\n");
	printf(" 외출했다가 돌아온 당신! 욕실에 들어갑니다.\n");
	printf(" 그리고 여느때처럼 샤워를 하려합니다. 이때당신은?!\n");

	printf("\n");
	printf("\n");

	printf("1. 반드시 얼굴을 먼저 씻는다.\n");
	printf("2. 몸을 씻고 얼굴은 그다음에...\n");

	scanf(" %d", &arr[0]);

	printf("\n"); printf("\n"); printf("\n");

	printf("2번\n");
	printf("숙제를 하기위기 컴퓨터를 킨당신.. 이때행동은?\n");
	printf("1. 열어놓는창은 2개이하다.\n");
	printf("2. 습관적으로 3개의 이상의창을 열어둔다.\n");
	scanf(" %d", &arr[1]);

	printf("3번\n");
	printf("당신은 비디오가계에서 최신 프로를 빌려왔습니다. 플레이버튼은 누른후 행동은?\n");
	printf("1. 예고편을본다.\n");
	printf("2. 예고편을 빨리감기고넘겨버린다.\n");
	scanf(" %d", &arr[2]);

	printf("4번\n");
	printf("영화를 보러갑니다. 자신이 보고싶은 영화는 2시간을 기다려야합니다. 당신은?\n");
	printf("1. 보고싶은것을 기다렸다 본다.\n");
	printf("2. 시간이 맞는 프로그램을 본다.\n");
	scanf(" %d", &arr[3]);

	printf("5번\n");
	printf("한동안 외출이 없던 당신에게 외출할 일이생깁니다.\n옷을 챙기고 나가려던 당신이 돌아온 이유는?\n");
	printf("1. 옷에 묻은 무언가를 발견했다.\n");
	printf("2. 전에 만났던 사람과 입었던 옷이기때문에.\n");
	scanf(" %d", &arr[4]);

	printf("6번\n");
	printf("연인과 쇼핑을 나갔다. 물건값이 7120원이 나왔을때 당신의 행동은 ?\n");
	printf("1. 동전지갑을 꺼내 따로 지불한다.\n");
	printf("2. 따로 동전지갑이 없으므로 지폐로 지불한다..\n");
	scanf("%d", &arr[5]);
	printf("\n"); printf("\n"); printf("\n");


	SumOfArr = ArrAdder(arr, sizeof(arr) / sizeof(int));  //ArrAdder 함수를 호출한다
	printf(" 점수 : %d \n", SumOfArr);  //첫인자는 배열의이름, 두 번째 인자로 전달 하는 것은 배열의 요소이다

	if (SumOfArr >= 7)		//if문을 사용하여 점수범위에따라 평가를내린다
		printf(" 당신은 순진남! 순정파!\n");
	else if (SumOfArr >= 9)
		printf(" 바람둥이기질이보여요. \n");
	else if (SumOfArr >= 12)
		printf(" 당신은 전형적인 바람둥이! \n");

	return 0;
}




int ArrAdder(int* pArr, int n)  // ArrAdder 함수

{
	int sum = 0;
	int i;
	for (i = 0; i < n; i++)  //for문을 하용하여 값을 합산한다.
		sum += pArr[i];
	return sum;
}