#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void BackjunPractice() {
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
		B + C를 했을 때 960 이상이면, A + 16, B - ( 60 * 16 )

		-> for문 사용필요?

		23시일 때, 시간이 추가될 경우 0시부터 다시 입력되도록 제약

		시간을 분으로 변환해서 계산
	*/
	int total_minutes = A * 60 + B + C;
	int end_hours = (total_minutes / 60) % 24;
	int end_minutes = total_minutes % 60;

	//if (end_hours >= 24)
	//	end_hours -= 24;
	printf("%d %d", end_hours, end_minutes);
}

void conditionalStatement() {
	//if문, else if문

	/*
	예제
	: 돈을 입력받고, 커피 또는 빵을 살지, 빵 구매여부를 입력받고 결과를 출력
	*/
	int money;
	printf("돈을 입력하세요: ");
	scanf_s("%d", &money);

	/*
	커피만 살 수 있고, 빵만 살 수 있고, 둘 다 살 수 있음
	커피: 2500원, 빵: 1000원
	*/
	int coffee;
	printf("커피 구매여부 입력(1/0) : ");
	scanf_s("%d", &coffee);

	if (coffee == 1 && money >= 2500) {
		money -= 2500;
		printf("커피 구매 완료, 거스름돈: %d", money);
	}
	else
		printf("돈이 부족합니다.");

	int bread;
	char bread_input;

	printf("\n빵 구매여부 입력(T/F) : ");
	/*
	scanf_s() 함수는 사용자가 엔터 키를 입력할 때마다 개행 문자가 버퍼에 남게 되는데, 이는 다음의 scanf_s() 호출에서 문제를 일으킵니다.
	개행 문자 제거를 위해 앞에 공백 추가 필요
	*/
	scanf_s(" %c", &bread_input);

	if (bread_input == 'T' || bread_input == 't')
		bread = 1;
	else if (bread_input == 'F' || bread_input == 'f')
		bread = 0;
	else {
		printf("잘못된 입력입니다.");
		return 1;
	}

	if (bread == 1) {
		money -= 1000;
		printf("빵 구매 완료, 거스름돈: %d", money);
	}
	else
		printf("돈이 부족합니다.");

}

void practice() {
	/*
	예제
	: 문자(영문자, 숫자)를 입력받고
	해당 문자가 영문자/숫자에서 몇번째 문자인지를 출력하라.
	만약 영문자를 입력받을 시, 대소문자 반전한 결과값도 출력하라.
	*/

	// #include <ctype.h> 선언 필요
	// ctype.h 헤더파일로 입력받은 문자가 문자(isalpha)인지 대소문자(islower)인지 숫자(isdigit)인지 구분 가능
	char char_input;
	int position;
	char reverse_char;

	printf("문자를 입력하세요: ");
	scanf_s("%c", &char_input);

	if (isalpha(char_input)) {
		if (islower(char_input)) {
			/*
			여기서 'a'는 ASCII 코드에서 소문자 알파벳 'a'의 값입니다. C 언어에서 문자는 ASCII 코드 값으로 표현됩니다.
			소문자 알파벳 'a'부터 'z'까지는 연속된 ASCII 코드 값을 갖고 있으므로, 각 소문자 알파벳을 'a'의 ASCII 코드 값으로부터 뺌으로써 그 알파벳이 몇 번째 문자인지를 계산할 수 있습니다.
			이때 '+1'을 하는 이유는 알파벳의 순서를 1부터 시작하기 위함입니다.

			예를 들어, 입력된 문자가 'c'일 경우에는:

			'c'의 ASCII 코드 값인 99에서 'a'의 ASCII 코드 값인 97을 빼면 2가 됩니다.
			여기에 1을 더하여 최종적으로 'c'가 알파벳에서 3번째 문자임을 알 수 있습니다.
			*/
			position = char_input - 'a' + 1;
			// ASCII 코드 64에서 32를 빼고 그 값을 입력받은 문자에서 빼면 대문자로 변형된 아스키코드 값이 출력됨
			reverse_char = char_input - ('a' - 'A');
			printf("소문자 -> 대문자 변형 결과: %c -> %c\n", char_input, reverse_char);
		}
		else {
			position = char_input - 'A' + 1;
			// ASCII 코드 64에서 32를 빼고 그 값을 입력받은 문자에서 더하면 소문자로 변형된 아스키코드 값이 출력됨
			reverse_char = char_input + ('a' - 'A');
			printf("대문자 -> 소문자 변형 결과: %c -> %c\n", char_input, reverse_char);
		}
		printf("%c는 영문자에서 %d번째 문제입니다.", char_input, position);

	}
	else if (isdigit(char_input)) {
		position = char_input - '0';
		printf("%c는 숫자에서 %d번째 문자입니다.", char_input, position);
	}
	else
		printf("잘못된 입력입니다.");

}

void BackjunPractice2() {
	/*
	#2480 주사위 세개
	1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 다음과 같은 규칙에 따라 상금을 받는 게임이 있다.

	같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
	같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
	모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.

	예를 들어, 3개의 눈 3, 3, 6이 주어지면 상금은 1,000+3×100으로 계산되어 1,300원을 받게 된다.
	또 3개의 눈이 2, 2, 2로 주어지면 10,000+2×1,000 으로 계산되어 12,000원을 받게 된다.
	3개의 눈이 6, 2, 5로 주어지면 그중 가장 큰 값이 6이므로 6×100으로 계산되어 600원을 상금으로 받게 된다.

	3개 주사위의 나온 눈이 주어질 때, 상금을 계산하는 프로그램을 작성 하시오.

	입력
	첫째 줄에 3개의 눈이 빈칸을 사이에 두고 각각 주어진다.

	출력
	첫째 줄에 게임의 상금을 출력 한다.
	*/

	int dice1, dice2, dice3;
	scanf_s("%d %d %d", &dice1, &dice2, &dice3);

	int money;
	if ((dice1 == dice2) && (dice2 == dice3)) {
		money = 10000 + dice1 * 1000;
		printf("%d", money);
	}
	else if ((dice1 != dice2) && (dice1 != dice3) && (dice2 != dice3)) {
		int max = 0;
		max = ((dice1 > dice2) && (dice1 > dice3)) ? dice1 : ((dice2 > dice1) && (dice2 > dice3)) ? dice2 : dice3;
		money = max * 100;
		printf("%d", money);
	}
	else {
		int same = 0;
		same = ((dice1 == dice2) || (dice1 == dice3) && (dice2 != dice3)) ? dice1 : dice2;
		money = 1000 + same * 100;
		printf("%d", money);
	}

}

void main() {
	//BackjunPractice();
	//conditionalStatement();
	//practice();
	//BackjunPractice2();
}