#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

void BackjunPractice1() {
	/*
	#25314 �ڵ��� ü������ �Դϴ�
	������� N����Ʈ ũ���� ������� ���α׷� �������?
	int�� 4����Ʈ, long long int�� 8����Ʈ, long long long int�� 12����Ʈ...
	
	long �ϳ��� 4����Ʈ��� ������ ��, int �տ� long�� � ���̴��Ŀ� ���� 4����Ʈ�� ����
	*/
	int N;
	scanf("%d", &N);

	for (int i = 0; i < (N / 4); i++) printf("long ");
	printf("int");
}

void BackjunPractice2() {
	/*
	#11021 A+B-7
	
	�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.

	�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)

	���
	�� �׽�Ʈ ���̽����� "Case #x: "�� ����� ����, A+B�� ����Ѵ�. �׽�Ʈ ���̽� ��ȣ�� 1���� �����Ѵ�.
	*/
	int T, A, B;
	scanf("%d", &T);
	
	for (int i = 1; i <= T; i++)
	{
		scanf(" %d %d", &A, &B);
		printf("Case #%d: %d\n", i, A + B);
	}

}

void BackjunPractice3() {
	/*
	#2438 �� ��� - 1

	ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

	�Է�
	ù° �ٿ� N(1 �� N �� 100)�� �־�����.

	���
	ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
	*/
	int time;
	scanf("%d", &time);

	for (int j = 0; j < time; j++)
	{
		for (int i = 0; i <= j; i++) {
			printf("*");
		}
		printf("\n");
	}

}

void BackjunPractice4() {
	/*
	#2439 �� ��� - 2

	ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����

	������, �������� �������� ������ ��(���� ����)�� ����Ͻÿ�.

	�Է�
	ù° �ٿ� N(1 �� N �� 100)�� �־�����.

	���
	ù° �ٺ��� N��° �ٱ��� ���ʴ�� ���� ����Ѵ�.
	*/
	int time;
	scanf("%d", &time);

	for (int i = 1; i <= time; i++)
	{
		for (int j = time; j > i; j--)
		{
			printf(" ");
		}
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}

void BackjunPractice5() {
	/*
	#10952 A+B - 5
	�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	�Է��� ���� ���� �׽�Ʈ ���̽��� �̷���� �ִ�.

	�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)

	�Է��� ���������� 0 �� ���� ���´�.

	���
	�� �׽�Ʈ ���̽����� A+B�� ����Ѵ�.
	*/
	int A, B;

	do
	{
		scanf("%d %d", &A, &B);

		if (A == 0 && B == 0) break;
		printf("%d\n", A + B);

	} while (A != 0 && B != 0);
	
}

int review() {
	// ����: ���� ĳ������ ������ �����ִ� ���α׷� �����
	// ���� n�� �Է��ϰ� n��ŭ�� ������ �����ִ� ������ ����
	int n;		// ĳ���Ͱ� ������ ������ ���� = n
	printf("ĳ������ ���� ������ �Է��ϼ���: ");
	scanf("%d", &n);

	int t = 1;
	while (t <= n) {
		printf("< �Ʒ� ��ȣ �� �ϳ��� �Է��ϼ��� >\n");
		printf("1. �ȴ�\n");
		printf("2. �Դ�\n");
		printf("3. �ٴ�\n");
		printf("��ȣ�� �Է��ϼ���: ");

		int command;
		scanf(" %d", &command);		// command ����: 1, 2, 3 �� �ϳ��� �Է��� ��

		switch (command)
		{
		case 1:
			printf("�ȱ⸦ ����\n");
			break;
		case 2:
			printf("�Ա⸦ ����\n");
			break;
		case 3:
			printf("�ٱ⸦ ����\n");
			break;
		default:
			printf("Error");
		}

		t++;		// �������� ������ t���� �����Ǹ鼭 ���ѷ���

		printf("\n");
	}

}

int Loop() {
	// �ݺ���: ������ Ƚ����ŭ ��ɹ��� �ݺ��ϴ� ����, ���ǽ��� ���ؼ� �ݺ� Ƚ�� ����

	// ����: 1���� 5���� ���������� ����ϴ� ���α׷�
	// while��
	printf("while�� ���\n");
	int num = 1;
	while (num <= 5)
	{
		printf("%d\n", num);
		num++;
	}
	printf("\n");
	//for��
	printf("for�� ���\n");
	for (num = 1; num <= 5; num++) printf("%d\n", num);

}

int loopPractice1() {
	/*
	2���� ���� n, m�� �Է¹ް�
	n���� m������ ���ڵ� �� 3�� ����� �͸� ���������� ����϶�
	*/
	int n, m;
	scanf("%d %d", &n, &m);

	for (n; n <= m; n++) {
		if(n % 3 == 0) printf("%d ", n);
	}
}

int doWhile() {
	//for (int i = 0; i != 0; i++)
	//{
	//	// i�� ���۰��� 0�̱� ������ ���ǽĿ� �������� ���� -> ��°��� ��ȯ���� ����
	//	printf("�ݺ����� ����˴ϴ�.");
	//}

	// do-while��: �ݵ�� �ѹ��� ������ �Ǵ� �ݺ���
	//	�켱�� ������ �� ������ �����鼭 �ݺ��� ���� ����

    //����: 1-10 ���
	int i = 1;
	do
	{
		printf("%d\n", i);
		i++;
	} while (i <= 10);

	printf("\n");

	int tf = 0;
	do
	{
		printf("do-while���� �����");
	} while (tf != 0);

}

int loopPractice2() {
	/*
	����: ���Ǳ� ���α׷��� �ۼ��Ͻÿ�
		����ڿ��� ������ �Է¹��� ��, ���� ������ ����
		- 1. �ݶ�(1000��)
		- 2. ���̴�(1100��)
		- 3. ��ī�� ����Ʈ(1800��)
		- 4. ������(800��)
		- 5. ī���(2500��)
		- 0. ���� ����
		
		����ڰ� 0�� �Է��ϰų� ���̻� ���Ḧ �� �� ���� �� �Ž������� �����ϸ鼭 ���� ����
	*/
	int coin, drink;
	printf("������ ��������: ");
	scanf("%d", &coin);

	printf("- 1. �ݶ�(1000��)\n- 2. ���̴�(1100��)\n- 3. ��ī�� ����Ʈ(1800��)\n- 4. ������(800��)\n- 5. ī���(2500��)\n- 0. ���� ����\n");
	while (coin != 0)
	{
		printf("\n");
		printf("���Ḧ �����ϼ���(��ȣ �Է�): ");
		scanf(" %d", &drink);

		if (coin >= 0 && drink >= 0 && drink <= 5) {
			if (drink == 1) {
				coin -= 1000;
				if (coin <= 0) {
					printf("�ܾ��� �����մϴ�");
				}
				else
					printf("�ݶ�, �Ž�����: %d\n", coin);
			}
			else if (drink == 2) {
				coin -= 1100;
				if (coin <= 0) {
					printf("�ܾ��� �����մϴ�");
				}
				else
					printf("���̴�, �Ž�����: %d\n", coin);
			}
			else if (drink == 3) {
				coin -= 1800;
				if (coin <= 0) {
					printf("�ܾ��� �����մϴ�");
				}
				else
					printf("��ī�� ����Ʈ, �Ž�����: %d\n", coin);
			}
			else if (drink == 4) {
				coin -= 800;
				if (coin <= 0) {
					printf("�ܾ��� �����մϴ�");
				}
				else
					printf("������, �Ž�����: %d\n", coin);
			}
			else if (drink == 5) {
				coin -= 2500;
				if (coin <= 0) {
					printf("�ܾ��� �����մϴ�");
				}
				else
					printf("ī���, �Ž�����: %d\n", coin);
			}
			else if (drink == 0) {
				printf("���� ����\n�̿����ּż� �����մϴ�:)");
				break;
			}

		}
		else
			printf("���Ḧ �ٽ� �����ϼ���.\n");

		if (coin <= 0) {
			printf("\n���� ����");
			break;
		}
		

	}

}

int main() {
	//BackjunPractice1();
	//BackjunPractice2();
	//BackjunPractice3();
	//BackjunPractice4();
	//BackjunPractice5();

	//review();

	//Loop();
	//loopPractice1();

	//doWhile();

	loopPractice2();
}