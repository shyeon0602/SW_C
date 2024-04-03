#include <stdio.h>
#include <stdbool.h>	// bool type

void BackjunPractice1() {
	// ���� 11382��: ��������
	// A, B, C�� ���� �Է¹ް� ���� ���

	long long a, b, c;
	printf("%d %d %d", &a, &b, &c);

	scanf_s("%d %d %d", &a, &b, &c);
	// & : �ּҿ�����( &a -> ���� a�� �ּ�/��ġ ��ȯ)


	long long result = a + b + c;
	printf("%d", result);

	// �ڷ���: ������(int), �Ǽ���(double), ������(char)
}

void BackjunPractice2() {
	/*
	ù° �ٿ� �� ���� H�� M�� �־�����. (0 �� H �� 23, 0 �� M �� 59) �׸��� �̰��� ���� ����̰� ������ �˶� �ð� H�� M���� �ǹ��Ѵ�.

	�Է� �ð��� 24�ð� ǥ���� ����Ѵ�. 24�ð� ǥ������ �Ϸ��� ������ 0:0(����)�̰�, ���� 23:59(������ ���� 1�� ��)�̴�. �ð��� ��Ÿ�� ��, ���ʿ��� 0�� ������� �ʴ´�.

	���
	ù° �ٿ� ����̰� â������ ����� ����� ��, �����ؾ� �ϴ� �˶� �ð��� ����Ѵ�. (�Է°� ���� ���·� ����ϸ� �ȴ�.)
	*/

	int H, M;
	scanf_s("%d %d", &H, &M);

	/*
	45���� �������� ���� ����
		M < 45 : �ð��� �ѽð� �ٰ�, ���� 15�� �þ
		M > 45 : �ð��� �״��, �п��� 45�� ��
		M == 45 : �ð��� �״��, ���� 0���� ���

		H == 0 : 23�÷� ����, ���� �������� ���ǹ� ���� �ʿ�
		M == 0 : �ð��� �ѽð� �ٰ� 15������ ����

		0�� 45�� : 0�� 0������ �ϵ��ڵ�?
		
	*/
	if (M < 45)
		printf("%d %d", H - 1, M + 15);
	else if (M > 45)
		printf("%d %d", H, M - 45);
	else if (M == 0)
		printf("%d %d", H - 1, 15);
	else if (H == 0) {
		if (M < 45)
			printf("%d %d", 23, M + 15);
		else if (M > 45)
			printf("%d %d", H, M - 45);
		else
			printf("%d %d", H, 0);
	}
	else
		printf("%d %d", H, 0);
	
}

void practice() {
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

void calculator() {
	// �Ҵ翬���� Ȱ��
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
	printf("ù��° n�� ��: %d\n", n);
	n++;
	printf("n++ �� n�� ��: %d\n", n);
	
	printf("n�� ��: %d\n", n);
	++n;
	printf("++n �� n�� ��: %d", n);
	*/

	// ���������� ��ġ�� ���� �ٸ��� ����� ��µ�
	printf("n�� ��: %d\n", n);
	printf("n++�� ��: %d\n", n++);	// �Ľ� �����������̱� ������ �켱������ n���� 100�� ���, c�� ������ ����̱� ������ ������ �Ʒ��� ���ະ�� ����
	printf("++n�� ��: %d\n", ++n);	// ���� �������� ������ ���� �ٿ��� n++�� 101�� �� ����, �� �� ���� ���������ڰ� ������ �Ǿ 102�� ���

	
}

int Decrement() {
	int n = 100;
	printf("\nn�� ��: %d\n", n);
	n--;
	printf("n�� ��: %d", n);
}

void BoolType() {
	// bool type �ۼ��� �� <stdbool.h> ���� #include�� �����ϱ�
	bool tf = (1 == 2);		// tf = false
	printf("1==2 ���: %d\n", tf);
	printf("1<=5 ���: %d", (1<=5));

	printf("\n");

	// ��������
	// 2���� ���ڸ� �Է¹ް� 2���� ���� ���Ͽ� ����� ���, ������ �ٸ��� ����� ����ϸ� ��
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	char difference = (num1 != num2) ? 'F' : 'T';
	printf("%c", difference);
}

void main() {
	// ��¹�(printf), �Է¹�(scanf)

	BackjunPractice2();

}