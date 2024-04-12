#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int loopPractice2_1() {
	/*
	예제: 자판기 프로그램을 작성하시오
		사용자에게 동전을 입력받은 뒤, 음료 선택지 제시
		- 1. 콜라(1000원)
		- 2. 사이다(1100원)
		- 3. 포카리 스웨트(1800원)
		- 4. 레쓰비(800원)
		- 5. 카페라떼(2500원)
		- 0. 실행 종료

		사용자가 0을 입력하거나 더이상 음료를 살 수 없을 때 거스름돈을 제공하면서 실행 종료
	*/
	int coin, drink;
	printf("동전을 넣으세요: ");
	scanf("%d", &coin);

	if (coin < 800)
	{
		printf("동전이 부족합니다. 실행을 종료합니다.");
		return 0;
	}

	printf("- 1. 콜라(1000원)\n- 2. 사이다(1100원)\n- 3. 포카리 스웨트(1800원)\n- 4. 레쓰비(800원)\n- 5. 카페라떼(2500원)\n- 0. 실행 종료\n");
	while (coin != 0)
	{
		printf("\n");
		printf("음료를 선택하세요(번호 입력): ");
		scanf(" %d", &drink);

		struct Drink
		{
			char name[30];
			int money;
		};

		struct Drink list[5] = {
			{"콜라", 1000},
			{"사이다", 1100},
			{"포카리 스웨트", 1800},
			{"레쓰비", 800},
			{"카페라떼", 2500}
		};

		if (coin >= 0 && drink > 0 && drink <= 5) {
			for (int i = 1; i <= 5; i++)
			{
				if (coin < 0) break;
				else if (drink == i) {
					{
						coin -= list[i - 1].money;
						if (coin < 0) printf("잔액이 부족합니다.\n");
						else printf("%s, 거스름돈: %d\n", list[i - 1].name, coin);
					};
				}
			}
		}
		else if (drink == 0)
		{
			printf("실행을 종료합니다. 이용해주셔서 감사합니다.");
			break;
		}
		else printf("음료를 다시 선택하세요.\n");

		if (coin <= 0) {
			printf("실행 종료을 종료합니다.");
			break;
		}
	}

}

void BackjoonPractice1() {
	/*
	#10807 개수 세기
	총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.

	입력
	첫째 줄에 정수의 개수 N(1 ≤ N ≤ 100)이 주어진다. 둘째 줄에는 정수가 공백으로 구분되어져있다. 
	셋째 줄에는 찾으려고 하는 정수 v가 주어진다. 입력으로 주어지는 정수와 v는 -100보다 크거나 같으며, 100보다 작거나 같다.

	출력
	첫째 줄에 입력으로 주어진 N개의 정수 중에 v가 몇 개인지 출력한다.
	*/

	int n, v;
	int cnt = 0;
	int numArr[100];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) scanf("%d", &numArr[i]);
	
	scanf("%d", &v);

	for (int j = 0; j < n; j++)
		if (numArr[j] == v) cnt++;

	printf("%d", cnt);

}

void BackjoonPractice2() {
	/*
	#10871 x보다 작은 수
	정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.

	입력
	첫째 줄에 N과 X가 주어진다. (1 ≤ N, X ≤ 10,000)

	둘째 줄에 수열 A를 이루는 정수 N개가 주어진다. 주어지는 정수는 모두 1보다 크거나 같고, 10,000보다 작거나 같은 정수이다.

	출력
	X보다 작은 수를 입력받은 순서대로 공백으로 구분해 출력한다. X보다 작은 수는 적어도 하나 존재한다.
	*/
	
	int n, x;
	scanf("%d %d", &n, &x);

	int a[10000] = { 0 };
	int b[sizeof(a)] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] < x) b[i] = a[i];
	}
	for (int j = 0; j < n; j++)
	{
		if(b[j] != 0) printf("%d ", b[j]);
	}

}

int Continue() {
	// 예제: n부터 m까지 숫자들 중 짝수만 출력(n<m)
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = n; i < m; i++)
	{
		if (i % 2 != 0) continue;	
		printf("%d", i);
	}
}

int Array() {
	// 배열: 하나의 이름으로 여러 개의 값을 넣을 수 있는 공간

	// 예제: 5명 학생의 성적을 입력받고 평균 이상인지 아닌지를 출력하라
	int score[5] = { 0 };		// 배열을 0으로 초기화
	int sum = 0;
	double avg;
	
	printf("성적을 입력하세요(5개 입력): ");
	for (int i = 0; i < 5; i++){
		scanf("%d", &score[i]);
		sum += score[i];
	}
	avg = sum / 5.0;
	printf("평균: %.1lf\n", avg);
	for (int j = 0; j < 5; j++) {
		avg <= score[j] ? printf("%d번째 점수: %d, 평균 이상\n", j+1, score[j]) : printf("%d번째 점수: %d, 평균 미만\n", j+1, score[j]);
	}
}

int arrayPractice1() {
	/*
	1차원 배열을 활용하여 아래의 프로그램을 만들어라.
	정보처리기사 필기 응시자의 1-5과목 점수를 입력받은 뒤
	합격/불합격 여부를 출력하라

	합불 여부만 출력 가능, 과락 여부 및 평균 충족/미달 여부 함께 출력 상관없음

	이때, 정보처리기사 필기 합격 조건은 아래와 같다.
	 - 각 과목의 점수는 모두 40점 이상이어야 하고
	 - 5과목 점수의 평균은 60점 이상이어야 한다.
	*/
	int score[5] = { 0 };
	printf("점수를 입력하세요(1~5과목 입력): ");

	int sum = 0;
	bool tf = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
		sum += score[i];
	}
	int avg = sum / 5;
	while (avg >= 60)
	{
		for (int j = 0; j < 5; j++)
		{
			if (score[j] >= 40) {
				tf = true;
			}
			else {
				printf("불합격");
				return 0;
			}
		}
		if (tf == true) printf("합격");
		return 0;
	}
	if ((avg >= 60 && tf != true) || avg < 60) printf("불합격");
	else printf("합격");
	
}

int main() {
	//loopPractice2_1();
	
	//BackjoonPractice1();
	//BackjoonPractice2();

	//Continue();
	
	//Array();
	arrayPractice1();
}