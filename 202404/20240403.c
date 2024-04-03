#include <stdio.h>

void BackjunPractice() {
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

void practice() {
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

void main() {
	// 출력문(printf), 입력문(scanf)

	

}