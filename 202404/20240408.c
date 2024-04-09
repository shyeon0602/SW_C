#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void BackjunPractice1() {
	/*
	�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	ù° �ٿ� �׽�Ʈ ���̽��� ���� T�� �־�����.

	�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)

	���
	�� �׽�Ʈ ���̽����� A+B�� ����Ѵ�.
	*/
	int A, B, T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &A, &B);
		int sum = A + B;
		printf("%d \n", sum);
	}
	
}

void BackjunPractice2() {
	/*
	n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	ù° �ٿ� n (1 �� n �� 10,000)�� �־�����.

	���
	1���� n���� ���� ����Ѵ�.
	*/
	int n;
	scanf("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) sum += i;
	printf("%d", sum);

}

void BackjunPractice3() {
	/*
	#25304 ������
	�Է�
	ù° �ٿ��� �������� ���� �� �ݾ� 
	$X$�� �־�����.

	��° �ٿ��� �������� ���� ������ ������ ������ �� 
	$N$�� �־�����.

	���� 
	$N$���� �ٿ��� �� ������ ���� 
	$a$�� ���� 
	$b$�� ������ ���̿� �ΰ� �־�����.

	���
	������ ������ ���ݰ� ������ ����� �� �ݾ��� �������� ���� �� �ݾװ� ��ġ�ϸ� Yes�� ����Ѵ�. 
	��ġ���� �ʴ´ٸ� No�� ����Ѵ�.
	*/

	long X;
	int N, a, b;
	int sum = 0;
	scanf("%d\n%d", &X, &N);

	int totalPrice[10];
	int oneOfPrice;
	for (int i = 0; i < N; i++)
	{
		scanf(" %d %d", &a, &b);
		oneOfPrice = a * b;
		totalPrice[i] = oneOfPrice;
		sum += totalPrice[i];
	}
	sum == X ? printf("Yes") : printf("No");
	
}

void BackjunPractice4() {
	/*
	#10872 N!
	����
	0���� ũ�ų� ���� ���� N�� �־�����. �̶�, N!�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	ù° �ٿ� ���� N(0 �� N �� 12)�� �־�����.

	���
	ù° �ٿ� N!�� ����Ѵ�.
	*/
	int N, result;
	scanf("%d", &N);

	result = 1;
	for (int i = 1; i <= N; i++)
		result *= i;
	printf("%d", result);
}

void review() {
	// ASCII code: �ΰ��� ��ǻ�� ������ ���Ͽ� ���� ������ Ư�� ���ڿ� �ϴ��� ������Ų ���

	// ����: �����ڸ� �Է¹ް�, ��ҹ��� �����Ͽ� ����ϱ�
	char alphabet = 0;
	printf("�����ڸ� �Է��ϼ���: ");
	scanf("%c", &alphabet);

	int reverse;
	// �빮��('A'==65)�� �Է¹޴� ��� -> �ҹ��� ����
	if (alphabet >= 'A' && alphabet < 'Z') {
		reverse = alphabet + ('a' - 'A');		// alphabet + 32;
		printf("%c, �빮�� -> �ҹ���: %c", alphabet, reverse);
	}

	// �ҹ���('a'==97)�� �Է¹޴� ��� -> �빮�� ����
	else if (alphabet >= 'a' && alphabet < 'z') {
		reverse = alphabet - ('a' - 'A');		// alphabet - 32;
		printf("%c, �ҹ��� -> �빮��: %c", alphabet, reverse);
	}

	// �����ڰ� �ƴ� ���ڸ� �Է¹޴� ��� -> �����޽��� ���
	else
		printf("Error");
}

int SwitchPractice1() {
	// ����1: ��(1~3)�� �Է¹ް�, �� ��쿡 ���� Ư�� ��(��������)�� ����϶�.
	int num;
	printf("1���� 3 ������ ���ڸ� �Է��ϼ���: ");
	scanf("%d", &num);

	// swich���� ũ�� �۴ٸ� ǥ���� �� ����, �������Ǹ� �˻� ����(���� ǥ�� �����)
	switch (num)
	{
	case 1:
		printf("����");
		break;

	case 2:
		printf("����");
		break;

	case 3:
		printf("��");
		break;

	default:
		printf("Error");
		break;
	}

}

int SwitchPractice2() {
	/*
	1. ���������� �Է¹ް� �հ�/���հ� ���θ� ����϶�.
	�̶� ������ 60�� �̻��� ��� �հݿ� �ش�ȴ�.
	*/
	int score;
	printf("���������� �Է��ϼ���: ");
	scanf("%d", &score);

	int switchScore = score / 10;

	switch (switchScore)
	{
	case 10:
	case 9:
	case 8:
	case 7:
	case 6:
		printf("�հ�\n");
		break;
	default:
		printf("���հ�\n");
		break;
	}

	/*
	// true/false�� bool type�̹Ƿ� switch�� ������ �ٷ� ������ �Ǳ⵵ ��
	bool tf = (score >= 60);
	switch	(tf) {
	case true:
		printf("�հ�");
		break;
	case false:
		printf("���հ�");
		break;
	}
	*/

}

int SwitchPractice3() {
	/*
	2. ������ �Է¹ް�, �� ������ ��� ������ �ش�Ǵ����� ����϶�.
	- A: 100-90
	- B: 89-80
	- C: 79-70
	- D: 69-60
	- F
	*/
	int score;
	printf("������ �Է��ϼ���: ");
	scanf(" %d", &score);

	int switchScore = score / 10;

	switch (switchScore)
	{
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}
}

int Loop() {
	// ����: 1-5 ����ϴ� ���α׷�
	for (int i = 1; i <= 5; i++)
		printf("%d", i);
		
	/*
	�ݺ���: ������ Ƚ����ŭ ������ ��ɹ��� �ݺ��ϴ� ����
		������ Ƚ����ŭ => Ư�� ���ǽĿ� ���� ��/�������� å��
	*/
	printf("\n");
	// while��
	int num = 0;
	while (num < 5)
	{
		num++;
		printf("%d", num);
	}
	printf("\n");
	num = 1;
	while (num <= 5)
	{
		printf("%d", num);
		num++;
	}

	// ���ĺ� A-Z ���
	char alpha = 'A';
	while (alpha <= 'Z')
	{
		printf("%c", alpha);
		alpha++;
	}

}

void LoopPractice1() {
	// 1. n�� �Է¹ް� 1���� n���� �Ͽ� ¦������ ������ ����ϴ� ���α׷� �����
	int n;
	printf("���° ���ڱ��� ������ �Է��ϼ���: ");
	scanf("%d", &n);

	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if(i % 2 == 0) sum += i;
	}
	printf("%d\n", sum);

}

void LoopPractice2() {
	// 2. n�� �Է¹ް�, n���� ���ڸ� �Է¹����ÿ�. n���� ���ڵ� �� ���� ū ���� ����ϴ� ���α׷��� ����ÿ�.
	// �迭�� ������� ���� �غ���
	int n, max, num;
	printf("���Ϸ��� ������ ������ �Է��ϼ���: ");
	scanf(" %d", &n);

	printf("���Ϸ��� ���ڸ� �Է��ϼ���: ");
	max = 0;
	for (int i = 0; i < n; i++)
	{
		scanf(" %d", &num);
		if (max < num) max = num;
	}
	printf("%d", max);
}

int main() {
	//review();
	
	//SwitchPractice1();
	//SwitchPractice2();
	//SwitchPractice3();
	
	//Loop();
	//LoopPractice1();
	//LoopPractice2();

	//BackjunPractice1();
	//BackjunPractice2();
	//BackjunPractice3();
	//BackjunPractice4();
}