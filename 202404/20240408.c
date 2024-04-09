#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BackjunPractice1() {
	/*
	두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

	입력
	첫째 줄에 테스트 케이스의 개수 T가 주어진다.

	각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

	출력
	각 테스트 케이스마다 A+B를 출력한다.
	*/
	int A, B, T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		int sum = A + B;
		printf("%d \n", sum);
	}
	
}

void BackjunPractice2() {
	/*
	n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

	입력
	첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

	출력
	1부터 n까지 합을 출력한다.
	*/
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) sum += i;
	printf("%d", sum);

}

void BackjunPractice3() {
	/*
	#25304 영수증
	입력
	첫째 줄에는 영수증에 적힌 총 금액 
	$X$가 주어진다.

	둘째 줄에는 영수증에 적힌 구매한 물건의 종류의 수 
	$N$이 주어진다.

	이후 
	$N$개의 줄에는 각 물건의 가격 
	$a$와 개수 
	$b$가 공백을 사이에 두고 주어진다.

	출력
	구매한 물건의 가격과 개수로 계산한 총 금액이 영수증에 적힌 총 금액과 일치하면 Yes를 출력한다. 
	일치하지 않는다면 No를 출력한다.
	*/

	long X;
	int N, a, b;
	int sum = 0;
	scanf("%d\n%d", &X, &N);

	int totalPrice[10];
	int oneOfPrice;
	for (int i = 0; i < N; i++)
	{
		scanf(" %d %d", &a, &b);
		oneOfPrice = a * b;
		totalPrice[i] = oneOfPrice;
		sum += totalPrice[i];
	}
	sum == X ? printf("Yes") : printf("No");
	
}

void BackjunPractice4() {
	/*
	#10872 N!
	문제
	0보다 크거나 같은 정수 N이 주어진다. 이때, N!을 출력하는 프로그램을 작성하시오.

	입력
	첫째 줄에 정수 N(0 ≤ N ≤ 12)이 주어진다.

	출력
	첫째 줄에 N!을 출력한다.
	*/
	int N, result;
	scanf("%d", &N);

	result = 1;
	for (int i = 1; i <= N; i++)
		result *= i;
	printf("%d", result);
}

void review() {
	// ASCII code: 인간과 컴퓨터 소통을 위하여 문자 정보를 특정 숫자와 일대일 대응시킨 약속

	// 예제: 영문자를 입력받고, 대소문자 반전하여 출력하기
	char alphabet = 0;
	printf("영문자를 입력하세요: ");
	scanf("%c", &alphabet);

	int reverse;
	// 대문자('A'==65)를 입력받는 경우 -> 소문자 반전
	if (alphabet >= 'A' && alphabet < 'Z') {
		reverse = alphabet + ('a' - 'A');		// alphabet + 32;
		printf("%c, 대문자 -> 소문자: %c", alphabet, reverse);
	}

	// 소문자('a'==97)를 입력받는 경우 -> 대문자 반전
	else if (alphabet >= 'a' && alphabet < 'z') {
		reverse = alphabet - ('a' - 'A');		// alphabet - 32;
		printf("%c, 소문자 -> 대문자: %c", alphabet, reverse);
	}

	// 영문자가 아닌 문자를 입력받는 경우 -> 에러메시지 출력
	else
		printf("Error");
}

int SwitchPractice1() {
	// 예제1: 값(1~3)을 입력받고, 각 경우에 따라 특정 값(임의지정)을 출력하라.
	int num;
	printf("1에서 3 사이의 숫자를 입력하세요: ");
	scanf("%d", &num);

	// swich문은 크고 작다를 표현할 수 없음, 동등조건만 검사 가능(범위 표현 어려움)
	switch (num)
	{
	case 1:
		printf("가위");
		break;

	case 2:
		printf("바위");
		break;

	case 3:
		printf("보");
		break;

	default:
		printf("Error");
		break;
	}

}

int SwitchPractice2() {
	/*
	1. 시험점수를 입력받고 합격/불합격 여부를 출력하라.
	이때 점수가 60점 이상일 경우 합격에 해당된다.
	*/
	int score;
	printf("시험점수를 입력하세요: ");
	scanf("%d", &score);

	int switchScore = score / 10;

	switch (switchScore)
	{
	case 10:
	case 9:
	case 8:
	case 7:
	case 6:
		printf("합격\n");
		break;
	default:
		printf("불합격\n");
		break;
	}

	/*
	// true/false는 bool type이므로 switch문 내에서 바로 연산이 되기도 함
	bool tf = (score >= 60);
	switch	(tf) {
	case true:
		printf("합격");
		break;
	case false:
		printf("불합격");
		break;
	}
	*/

}

int SwitchPractice3() {
	/*
	2. 성적을 입력받고, 이 성적이 어느 학점에 해당되는지를 출력하라.
	- A: 100-90
	- B: 89-80
	- C: 79-70
	- D: 69-60
	- F
	*/
	int score;
	printf("성적을 입력하세요: ");
	scanf(" %d", &score);

	int switchScore = score / 10;

	switch (switchScore)
	{
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}
}

int Loop() {
	// 예제: 1-5 출력하는 프로그램
	for (int i = 1; i <= 5; i++)
		printf("%d", i);
		
	/*
	반복문: 지정된 횟수만큼 동일한 명령문을 반복하는 구문
		지정된 횟수만큼 => 특정 조건식에 대한 참/거짓으로 책정
	*/
	printf("\n");
	// while문
	int num = 0;
	while (num < 5)
	{
		num++;
		printf("%d", num);
	}
	printf("\n");
	num = 1;
	while (num <= 5)
	{
		printf("%d", num);
		num++;
	}

	// 알파벳 A-Z 출력
	char alpha = 'A';
	while (alpha <= 'Z')
	{
		printf("%c", alpha);
		alpha++;
	}

}

void LoopPractice1() {
	// 1. n을 입력받고 1부터 n까지 하여 짝수들의 총합을 출력하는 프로그램 만들기
	int n;
	printf("몇번째 숫자까지 합할지 입력하세요: ");
	scanf("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if(i % 2 == 0) sum += i;
	}
	printf("%d\n", sum);

}

void LoopPractice2() {
	// 2. n을 입력받고, n개의 숫자를 입력받으시오. n개의 숫자들 중 가장 큰 값을 출력하는 프로그램을 만드시오.
	// 배열을 사용하지 말고 해보기
	int n, max, num;
	printf("비교하려는 숫자의 개수를 입력하세요: ");
	scanf(" %d", &n);

	printf("비교하려는 숫자를 입력하세요: ");
	max = 0;
	for (int i = 0; i < n; i++)
	{
		scanf(" %d", &num);
		if (max < num) max = num;
	}
	printf("%d", max);
}

int main() {
	//review();
	
	//SwitchPractice1();
	//SwitchPractice2();
	//SwitchPractice3();
	
	//Loop();
	//LoopPractice1();
	//LoopPractice2();

	//BackjunPractice1();
	//BackjunPractice2();
	//BackjunPractice3();
	//BackjunPractice4();
}