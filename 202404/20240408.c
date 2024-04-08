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

void review() {
	// ASCII code: �ΰ��� ��ǻ�� ������ ���Ͽ� ���� ������ Ư�� ���ڿ� �ϴ��� ������Ų ���

	// ����: �����ڸ� �Է¹ް�, ��ҹ��� �����Ͽ� ����ϱ�
	char alphabet = 0;
	printf("�����ڸ� �Է��ϼ���: ");
	scanf_s("%c", &alphabet);

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

}

int main() {
	//review();
	//SwitchPractice1();
	//SwitchPractice2();
	//SwitchPractice3();
	//Loop();

	//BackjunPractice1();
	//BackjunPractice2();
}