#include <stdio.h>

// ����: int�� �Է� 3�� ����(a, b, c), a���� b������ ���� ���϶�. c�� ����� �տ� ����x

int a = 0, b = 0, c = 0;

int getNum() {
	printf("3�� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &a, &b, &c);
}

int sum(int a, int b, int c) {
	int result = 0;

	for (int i = a; i <= b; i++)
		if (i % c != 0)result += i;

	printf("%d�� ��� ����\n%d���� %d������ ��: %d", c, a, b, result);
}

int main() {
	getNum();
	sum(a, b, c);
}