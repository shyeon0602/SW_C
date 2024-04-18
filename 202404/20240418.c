#include <stdio.h>

// �Լ����� ���� �޾Ƴ��� ���(�Ű����� ���ؼ� ���� �޾Ƴ��� ���)
// call by value, call by reference(������)

// ����: 2���� �Ǽ� ������ �ް� ���� ����

void add(double a, double b) {
	a += b;
	printf("add a�� ��: %.1f\n", a);
}

void plus(double* a, double* b) {
	*a += *b;
	// �Ű����� a�� ������ ������ �����߱� ������ a �Ǵ� �ּҰ����� ����ϸ� ���� null�� ��
	// ������ ���� ����ϱ� ���ؼ� ������ ���� *a�� ����ؾ� ��
	printf("plus *a�� ��: %.1f\n", *a);
}

int main() {
	double num1, num2;
	scanf("%lf %lf", &num1, &num2);
	printf("num1 ��: %.1f, num2 ��: %.1f\n", num1, num2);

	printf("\n");

	// call by value ���: num1, num2�� ���� �Լ��� ����(���� ��°�� ����x)
	add(num1, num2);
	printf("call by value�� num1 ��: %.1f\n", num1);
	
	printf("\n");
	
	// call by reference ���: num1, num2�� �ּҰ��� �Լ��� ���� (������ ��°�� ����)
	plus(&num1, &num2);
	printf("call by reference�� num1 ��: %.1f\n", num1);
	
}