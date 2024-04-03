#include <stdio.h>
#include <stdbool.h>	// bool type

void BackjunPractice1() {
	// 백준 11382번: 꼬마정민
	// A, B, C에 대해 입력받고 합을 출력

	long long a, b, c;
	printf("%d %d %d", &a, &b, &c);

	scanf_s("%d %d %d", &a, &b, &c);
	// & : 주소연산자( &a -> 변수 a의 주소/위치 반환)


	long long result = a + b + c;
	printf("%d", result);

	// 자료형: 정수형(int), 실수형(double), 문자형(char)
}

void BackjunPractice2() {
	/*
	#2884 알람시계

	첫째 줄에 두 정수 H와 M이 주어진다. (0 ≤ H ≤ 23, 0 ≤ M ≤ 59) 그리고 이것은 현재 상근이가 설정한 알람 시간 H시 M분을 의미한다.

	입력 시간은 24시간 표현을 사용한다. 24시간 표현에서 하루의 시작은 0:0(자정)이고, 끝은 23:59(다음날 자정 1분 전)이다. 시간을 나타낼 때, 불필요한 0은 사용하지 않는다.

	출력
	첫째 줄에 상근이가 창영이의 방법을 사용할 때, 설정해야 하는 알람 시간을 출력한다. (입력과 같은 형태로 출력하면 된다.)
	*/

	int H, M;
	scanf_s("%d %d", &H, &M);

	/*
	45분을 기준으로 조건 제약
		M < 45 : 시간이 한시간 줄고, 분이 15분 늘어남
		M > 45 : 시간은 그대로, 분에서 45분 뺌
		M == 45 : 시간은 그대로, 분을 0으로 출력

		H == 0 : 23시로 지정, 분을 기준으로 조건문 지정 필요
		M == 0 : 시간은 한시간 줄고 15분으로 지정

		0시 45분 : 0시 0분으로 하드코딩?
	*/
	
	// 분을 45분 기준으로 45보다 적을 때는 시간을 한시간 빼고 분에서 60을 더하기
	
	if (H == 0) {
		if (M < 45) {
			printf("%d %d", 23, M - 45 + 60);
		}
		else if (M >= 45) {
			printf("%d %d", 0, M - 45);
		}
	}
	else {
		if (M < 45)
			printf("%d %d", H - 1, M - 45 + 60);
		else if (M >= 45)
			printf("%d %d", H, M - 45);
	}
}

void BackjunPractice3() {
	/*
	#2525 오븐시계

	오븐구이 끝나는 시간 분 단위 자동계산
	오리구이 시작시간, 오븐구이 필요시간, 요리 끝나는 시간
	*/

	int A, B, C;
	scanf_s("%d %d\n%d", &A, &B, &C);

	// 시작시간 + 필요시간 = 끝나는 시간
	/*
	조건문 제약조건
		B + C를 했을 때 60 이상이면, A + 1, B - 60
		B + C를 했을 때 120 이상이면, A + 2, B - ( 60 * 2 )
		B + C를 했을 때 180 이상이면, A + 3, B - ( 60 * 3 )
		...
		B + C를 했을 때 960 이상이면, A + 3, B - ( 60 * 16 )

		-> for문 사용필요?

	*/
}

void practice() {
	// 출력문(printf), 입력문(scanf)

	// 연습문제
	// 두개의 숫자를 입력받고, 나눗셈 결과를 출력하라, 2개 숫자는 정수형, 결과는 소수점까지 나오게끔 하라
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);

	// 나머지 연산자는 정수형 값을 받았을 때 결과 추출 가능
	// 명시적 형변환
	double remainder = num1 % num2;
	double quotient = (double)num1 / num2;
	printf("나머지: %lf\n몫: %lf", remainder, quotient);
}

void practice2() {
	/*
	1. 백준 1330번(두 수 비교하기) 문제 풀기

	2. 자판기 프로그램을 작성하시오.
	- 사용자에게 동전을 입력받은 뒤, 음료 선택지 제시
	  - 콜라(1000원)
	  - 사이다(1100원)
	  - 포카리 스웨트(1800원)
	  - 레쓰비(800원)
	  - 카페라떼(2500원)
	- 금액이 충분하다면, 음료가 제공되었음을 출력으로 알린 뒤 거스름돈 출력하기. 그리고 실행 종료.
	  금액이 부족하다면, 금액이 부족함을 출력으로 알린 뒤 실행 종료
	*/

	// 1번 두 수 비교하기

	// 2번 자판기
	int coin;
	int drink[][20] = {"레쓰비", "콜라", "사이다", "포카리 스웨트", "카페라떼"};
	int choice;
	printf("- 콜라(1000원)\n- 사이다(1100원)\n- 포카리 스웨트(1800원)\n- 레쓰비(800원)\n- 카페라떼(2500원)\n");
	printf("\n동전을 넣어주세요: ");
	scanf_s("%d", &coin);
	
	if (coin >= 800 && coin < 1000)
		printf("- 1. 레쓰비(800원)");
	else if (coin >= 1000 && coin < 1100)
		printf("- 1. 레쓰비(800원)\n- 2. 콜라(1000원)");
	else if(coin >= 1100 && coin < 1800)
		printf("- 1. 레쓰비(800원)\n- 2. 콜라(1000원)\n- 3. 사이다(1100원)");
	else if(coin >= 1800 && coin < 2500)
		printf("- 1. 레쓰비(800원)\n- 2. 콜라(1000원)\n- 3. 사이다(1100원)\n- 4. 포카리 스웨트(1800원)");
	else if(coin >= 2500)
		printf("- 1. 레쓰비(800원)\n- 2. 콜라(1000원)\n- 3. 사이다(1100원)\n- 4. 포카리 스웨트(1800원)\n- 5. 카페라떼(2500원)");

	printf("\n");
	printf("\n");
	printf("음료 번호를 입력하세요: ");
	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("레쓰비, 거스름돈: %d", coin - 800);
		break;
	case 2:
		printf("콜라, 거스름돈: %d", coin - 1000);
		break;
	case 3:
		printf("사이다, 거스름돈: % d", coin - 1100);
		break;
	case 4:
		printf("포카리 스웨트, 거스름돈: %d", coin - 1800);
		break;
	case 5:
		printf("카페라떼, 거스름돈: %d", coin - 2500);
		break;
	}



	




}

void calculator() {
	// 할당연산자 활용
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);

	num1 += num2;
	printf("num1 + num2: %d\n", num1);

	num1 -= num2;
	printf("num1 - num2: %d\n", num1);

	num1 *= num2;
	printf("num1 * num2: %d\n", num1);

	num1 /= num2;
	printf("num1 / num2: %d\n", num1);

}

int Increment() {
	int n = 100;
	/*
	printf("첫번째 n의 값: %d\n", n);
	n++;
	printf("n++ 시 n의 값: %d\n", n);
	
	printf("n의 값: %d\n", n);
	++n;
	printf("++n 시 n의 값: %d", n);
	*/

	// 증감연산자 위치에 따라 다르게 결과값 출력됨
	printf("n의 값: %d\n", n);
	printf("n++의 값: %d\n", n++);	// 후시 증감연산자이기 때문에 우선적으로 n값인 100을 출력, c는 절차적 언어이기 때문에 위에서 아래로 개행별로 읽음
	printf("++n의 값: %d\n", ++n);	// 전시 증감연산 이전에 위에 줄에서 n++로 101이 된 상태, 그 후 전시 증감연산자가 적용이 되어서 102를 출력

	
}

int Decrement() {
	int n = 100;
	printf("\nn의 값: %d\n", n);
	n--;
	printf("n의 값: %d", n);
}

void BoolType() {
	// bool type 작성할 때 <stdbool.h> 파일 #include로 참조하기
	bool tf = (1 == 2);		// tf = false
	printf("1==2 결과: %d\n", tf);
	printf("1<=5 결과: %d", (1<=5));

	printf("\n");

	// 연습문제
	// 2개의 숫자를 입력받고 2개의 값을 비교하여 결과를 출력, 같은지 다른지 결과만 출력하면 됨

	// 1) bool type 변수로 참/거짓 여부 판별 -> 이에 따라 결과출력
	int num1, num2;
	/*
	bool tf = (num1 == num2);
	(tf == true) ? printf("2개 숫자 같습니다.") : printf("2개 숫자 다릅니다.");
	*/

	scanf_s("%d %d", &num1, &num2);
	char difference = (num1 != num2) ? 'F' : 'T';
	printf("%c", difference);
}

void If() {
	// 조건문: 조건식의 결과에 따라 수행할 명령문을 달리할 때 사용
	
	/*
	예제: 시험점수를 입력받고, pass/fail 여부 출력
		(60점 이상이면 pass)
	*/
	int score;
	scanf_s("%d", &score);

	/*score >= 60 ? printf("PASS") : printf("FAIL");*/

	if (score >= 60)
		printf("PASS");
	else
		printf("FAIL");
	
}

void main() {
		
	practice2();

}