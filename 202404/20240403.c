#include <stdio.h>

void main() {
	// ��¹�(printf), �Է¹�(scanf)

	// ���� 11382��: ��������
	// A, B, C�� ���� �Է¹ް� ���� ���

	//long long a, b, c;
	// printf("%d %d %d", &a, &b, &c);

	//scanf_s("%d %d %d", &a, &b, &c);
	// & : �ּҿ�����( &a -> ���� a�� �ּ�/��ġ ��ȯ)


	//long long result = a + b + c;
	//printf("%d", result);

	// �ڷ���: ������(int), �Ǽ���(double), ������(char)

	// ��������
	// �ΰ��� ���ڸ� �Է¹ް�, ������ ����� ����϶�, 2�� ���ڴ� ������, ����� �Ҽ������� �����Բ� �϶�
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	
	// ������ �����ڴ� ������ ���� �޾��� �� ��� ���� ����
	// ����� ����ȯ
	double remainder = num1 % num2;
	double quotient = (double)num1 / num2;
	printf("������: %lf\n��: %lf", remainder, quotient);


}