#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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

int main() {
	//BackjunPractice1();
	//BackjunPractice2();
	//BackjunPractice3();
	//BackjunPractice4();

	//review();

	//Loop();
	//loopPractice1();
}