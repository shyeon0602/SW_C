#include <stdio.h>

int num1, num2;

void calculator() {
	
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

int main() {
	calculator();
}