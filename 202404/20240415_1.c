#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num1, num2, result;
char operator;

int Error() {
	printf("Error"); 
	return -1;
}
int sum(int num1, int num2) {
	result = num1 + num2;
	return result;
}
int minus(int num1, int num2) {
	result = num1 - num2;
	return result;
}
int multiply(int num1, int num2) {
	result = num1 * num2;
	return result;
}
int divided(int num1, int num2) {
	if (num2 == 0) return Error();
	result = num1 / num2;
	return result;
}
int remainder(int num1, int num2) {
	if (num2 == 0) return Error();
	result = num1 % num2;
	return result;
}

int calculator() {
	switch (operator)
	{
	case '+':
		printf("%d", sum(num1, num2));
		break;
	case '-':
		printf("%d", minus(num1, num2));
		break;
	case '*':
		printf("%d", multiply(num1, num2));
		break;
	case '/':
		if (divided(num1, num2) == -1) return 0;
		printf("%d", divided(num1, num2));
		break;
	case '%':
		if (remainder(num1, num2) == -1) return 0;
		printf("%d", remainder(num1, num2));
		break;
	default:
		printf("Error");
		break;
	}
}

int main() {
	printf("숫자 2개와 연산자 순으로 입력: ");
	scanf("%d %d %c", &num1, &num2, &operator);
	calculator();
}