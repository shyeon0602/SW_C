#include <stdio.h>

// 함수에서 값을 받아내는 방식(매개변수 통해서 값을 받아내는 방식)
// call by value, call by reference(포인터)

// 예제: 2개의 실수 정보를 받고 덧셈 수행

void add(double a, double b) {
	a += b;
	printf("add a의 값: %.1f\n", a);
}

void plus(double* a, double* b) {
	*a += *b;
	// 매개변수 a를 포인터 변수로 전달했기 때문에 a 또는 주소값으로 출력하면 값이 null로 뜸
	// 포인터 값을 출력하기 위해서 포인터 변수 *a를 출력해야 함
	printf("plus *a의 값: %.1f\n", *a);
}

int main() {
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("num1 값: %.1f, num2 값: %.1f\n", num1, num2);

	printf("\n");

	// call by value 기법: num1, num2의 값만 함수로 전달(변수 통째로 전달x)
	add(num1, num2);
	printf("call by value의 num1 값: %.1f\n", num1);
	
	printf("\n");
	
	// call by reference 기법: num1, num2의 주소값을 함수로 전달 (변수를 통째로 전달)
	plus(&num1, &num2);
	printf("call by reference의 num1 값: %.1f\n", num1);
	
}