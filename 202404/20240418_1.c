#include <stdio.h>

// ����Լ�: �ڱ��ڽ��� �θ��� �Լ�

// ����: ���޹��� n���� ���� n ~ 1���� ����ϴ� �Լ� (n�� �ڿ���)
int print(int n) {
	printf("%d ", n);
	if (n == 1) return 0;
	return print(n - 1);
}

int main() {
	int num;
	scanf("%d", &num);

	print(num);
}