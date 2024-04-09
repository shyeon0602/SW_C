#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BackjunPractice1() {
	/*
	#25314 코딩은 체육과목 입니다
	입출력이 N바이트 크기의 정수라면 프로그램 구현방법?
	int는 4바이트, long long int는 8바이트, long long long int는 12바이트...
	
	long 하나당 4바이트라고 생각할 때, int 앞에 long을 몇개 붙이느냐에 따라 4바이트씩 증가
	*/
	int N;
	scanf("%d", &N);

	for (int i = 0; i < (N / 4); i++) printf("long ");
	printf("int");
}

void BackjunPractice2() {
	/*
	#11021 A+B-7
	
	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

	입력
	첫째 줄에 테스트 케이스의 개수 T가 주어진다.

	각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

	출력
	각 테스트 케이스마다 "Case #x: "를 출력한 다음, A+B를 출력한다. 테스트 케이스 번호는 1부터 시작한다.
	*/
	int T, A, B;
	scanf("%d", &T);
	
	for (int i = 1; i <= T; i++)
	{
		scanf(" %d %d", &A, &B);
		printf("Case #%d: %d\n", i, A + B);
	}

}

void BackjunPractice3() {
	/*
	#2438 별 찍기 - 1

	첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

	입력
	첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

	출력
	첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
	*/
	int time;
	scanf("%d", &time);

	for (int j = 0; j < time; j++)
	{
		for (int i = 0; i <= j; i++) {
			printf("*");
		}
		printf("\n");
	}

}

void BackjunPractice4() {
	/*
	#2439 별 찍기 - 2

	첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

	하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

	입력
	첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

	출력
	첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.
	*/
	int time;
	scanf("%d", &time);

	for (int i = 1; i <= time; i++)
	{
		for (int j = time; j > i; j--)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}

int review() {
	// 예제: 게임 캐릭터의 동작을 보여주는 프로그램 만들기
	// 숫자 n을 입력하고 n만큼의 동작을 보여주는 식으로 진행
	int n;		// 캐릭터가 수행할 동작의 개수 = n
	printf("캐릭터의 동작 개수를 입력하세요: ");
	scanf("%d", &n);

	int t = 1;
	while (t <= n) {
		printf("< 아래 번호 중 하나를 입력하세요 >\n");
		printf("1. 걷다\n");
		printf("2. 먹다\n");
		printf("3. 뛰다\n");
		printf("번호를 입력하세요: ");

		int command;
		scanf(" %d", &command);		// command 예상값: 1, 2, 3 중 하나를 입력할 것

		switch (command)
		{
		case 1:
			printf("걷기를 수행\n");
			break;
		case 2:
			printf("먹기를 수행\n");
			break;
		case 3:
			printf("뛰기를 수행\n");
			break;
		default:
			printf("Error");
		}

		t++;		// 증감식이 없으면 t값이 유지되면서 무한루프

		printf("\n");
	}

}

int Loop() {
	// 반복문: 임의의 횟수만큼 명령문을 반복하는 구문, 조건식을 통해서 반복 횟수 지정

	// 예제: 1부터 5까지 순차적으로 출력하는 프로그램
	// while문
	printf("while문 출력\n");
	int num = 1;
	while (num <= 5)
	{
		printf("%d\n", num);
		num++;
	}
	printf("\n");
	//for문
	printf("for문 출력\n");
	for (num = 1; num <= 5; num++) printf("%d\n", num);

}

int loopPractice1() {
	/*
	2개의 숫자 n, m을 입력받고
	n부터 m까지의 숫자들 중 3의 배수인 것만 순차적으로 출력하라
	*/
	int n, m;
	scanf("%d %d", &n, &m);

	for (n; n <= m; n++) {
		if(n % 3 == 0) printf("%d ", n);
	}
}

int main() {
	//BackjunPractice1();
	//BackjunPractice2();
	//BackjunPractice3();
	//BackjunPractice4();

	//review();

	//Loop();
	//loopPractice1();
}