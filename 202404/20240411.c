#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int loopPractice2_1() {
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

	if (coin < 800)
	{
		printf("������ �����մϴ�. ������ �����մϴ�.");
		return 0;
	}

	printf("- 1. �ݶ�(1000��)\n- 2. ���̴�(1100��)\n- 3. ��ī�� ����Ʈ(1800��)\n- 4. ������(800��)\n- 5. ī���(2500��)\n- 0. ���� ����\n");
	while (coin != 0)
	{
		printf("\n");
		printf("���Ḧ �����ϼ���(��ȣ �Է�): ");
		scanf(" %d", &drink);

		struct Drink
		{
			char name[30];
			int money;
		};

		struct Drink list[5] = {
			{"�ݶ�", 1000},
			{"���̴�", 1100},
			{"��ī�� ����Ʈ", 1800},
			{"������", 800},
			{"ī���", 2500}
		};

		if (coin >= 0 && drink > 0 && drink <= 5) {
			for (int i = 1; i <= 5; i++)
			{
				if (coin < 0) break;
				else if (drink == i) {
					{
						coin -= list[i - 1].money;
						if (coin < 0) printf("�ܾ��� �����մϴ�.\n");
						else printf("%s, �Ž�����: %d\n", list[i - 1].name, coin);
					};
				}
			}
		}
		else if (drink == 0)
		{
			printf("������ �����մϴ�. �̿����ּż� �����մϴ�.");
			break;
		}
		else printf("���Ḧ �ٽ� �����ϼ���.\n");

		if (coin <= 0) {
			printf("���� ������ �����մϴ�.");
			break;
		}
	}

}

void BackjoonPractice1() {
	/*
	#10807 ���� ����
	�� N���� ������ �־����� ��, ���� v�� �� ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	ù° �ٿ� ������ ���� N(1 �� N �� 100)�� �־�����. ��° �ٿ��� ������ �������� ���еǾ����ִ�. 
	��° �ٿ��� ã������ �ϴ� ���� v�� �־�����. �Է����� �־����� ������ v�� -100���� ũ�ų� ������, 100���� �۰ų� ����.

	���
	ù° �ٿ� �Է����� �־��� N���� ���� �߿� v�� �� ������ ����Ѵ�.
	*/

	int n, v;
	int cnt = 0;
	int numArr[100];
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) scanf("%d", &numArr[i]);
	
	scanf("%d", &v);

	for (int j = 0; j < n; j++)
		if (numArr[j] == v) cnt++;

	printf("%d", cnt);

}

void BackjoonPractice2() {
	/*
	#10871 x���� ���� ��
	���� N���� �̷���� ���� A�� ���� X�� �־�����. �̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	ù° �ٿ� N�� X�� �־�����. (1 �� N, X �� 10,000)

	��° �ٿ� ���� A�� �̷�� ���� N���� �־�����. �־����� ������ ��� 1���� ũ�ų� ����, 10,000���� �۰ų� ���� �����̴�.

	���
	X���� ���� ���� �Է¹��� ������� �������� ������ ����Ѵ�. X���� ���� ���� ��� �ϳ� �����Ѵ�.
	*/
	
	int n, x;
	scanf("%d %d", &n, &x);

	int a[10000] = { 0 };
	int b[sizeof(a)] = { 0 };
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] < x) b[i] = a[i];
	}
	for (int j = 0; j < n; j++)
	{
		if(b[j] != 0) printf("%d ", b[j]);
	}

}

int Continue() {
	// ����: n���� m���� ���ڵ� �� ¦���� ���(n<m)
	int n, m;
	scanf("%d %d", &n, &m);

	for (int i = n; i < m; i++)
	{
		if (i % 2 != 0) continue;	
		printf("%d", i);
	}
}

int Array() {
	// �迭: �ϳ��� �̸����� ���� ���� ���� ���� �� �ִ� ����

	// ����: 5�� �л��� ������ �Է¹ް� ��� �̻����� �ƴ����� ����϶�
	int score[5] = { 0 };		// �迭�� 0���� �ʱ�ȭ
	int sum = 0;
	double avg;
	
	printf("������ �Է��ϼ���(5�� �Է�): ");
	for (int i = 0; i < 5; i++){
		scanf("%d", &score[i]);
		sum += score[i];
	}
	avg = sum / 5.0;
	printf("���: %.1lf\n", avg);
	for (int j = 0; j < 5; j++) {
		avg <= score[j] ? printf("%d��° ����: %d, ��� �̻�\n", j+1, score[j]) : printf("%d��° ����: %d, ��� �̸�\n", j+1, score[j]);
	}
}

int arrayPractice1() {
	/*
	1���� �迭�� Ȱ���Ͽ� �Ʒ��� ���α׷��� ������.
	����ó����� �ʱ� �������� 1-5���� ������ �Է¹��� ��
	�հ�/���հ� ���θ� ����϶�

	�պ� ���θ� ��� ����, ���� ���� �� ��� ����/�̴� ���� �Բ� ��� �������

	�̶�, ����ó����� �ʱ� �հ� ������ �Ʒ��� ����.
	 - �� ������ ������ ��� 40�� �̻��̾�� �ϰ�
	 - 5���� ������ ����� 60�� �̻��̾�� �Ѵ�.
	*/
	int score[5] = { 0 };
	printf("������ �Է��ϼ���(1~5���� �Է�): ");

	int sum = 0;
	bool tf = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &score[i]);
		sum += score[i];
	}
	int avg = sum / 5;
	while (avg >= 60)
	{
		for (int j = 0; j < 5; j++)
		{
			if (score[j] >= 40) {
				tf = true;
			}
			else {
				printf("���հ�");
				return 0;
			}
		}
		if (tf == true) printf("�հ�");
		return 0;
	}
	if ((avg >= 60 && tf != true) || avg < 60) printf("���հ�");
	else printf("�հ�");
	
}

int main() {
	//loopPractice2_1();
	
	//BackjoonPractice1();
	//BackjoonPractice2();

	//Continue();
	
	//Array();
	arrayPractice1();
}