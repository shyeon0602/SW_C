#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

void BackjunPractice() {
	/*
	#2525 ����ð�

	���챸�� ������ �ð� �� ���� �ڵ����
	�������� ���۽ð�, ���챸�� �ʿ�ð�, �丮 ������ �ð�
	*/

	int A, B, C;
	scanf_s("%d %d\n%d", &A, &B, &C);

	// ���۽ð� + �ʿ�ð� = ������ �ð�
	/*
	���ǹ� ��������
		B + C�� ���� �� 60 �̻��̸�, A + 1, B - 60
		B + C�� ���� �� 120 �̻��̸�, A + 2, B - ( 60 * 2 )
		B + C�� ���� �� 180 �̻��̸�, A + 3, B - ( 60 * 3 )
		...
		B + C�� ���� �� 960 �̻��̸�, A + 16, B - ( 60 * 16 )

		-> for�� ����ʿ�?

		23���� ��, �ð��� �߰��� ��� 0�ú��� �ٽ� �Էµǵ��� ����

		�ð��� ������ ��ȯ�ؼ� ���
	*/
	int total_minutes = A * 60 + B + C;
	int end_hours = (total_minutes / 60) % 24;
	int end_minutes = total_minutes % 60;

	//if (end_hours >= 24)
	//	end_hours -= 24;
	printf("%d %d", end_hours, end_minutes);
}

void conditionalStatement() {
	//if��, else if��
	
	/*
	����
	: ���� �Է¹ް�, Ŀ�� �Ǵ� ���� ����, �� ���ſ��θ� �Է¹ް� ����� ���
	*/
	int money;
	printf("���� �Է��ϼ���: ");
	scanf_s("%d", &money);

	/*
	Ŀ�Ǹ� �� �� �ְ�, ���� �� �� �ְ�, �� �� �� �� ����
	Ŀ��: 2500��, ��: 1000��
	*/
	int coffee;
	printf("Ŀ�� ���ſ��� �Է�(1/0) : ");
	scanf_s("%d", &coffee);

	if (coffee == 1 && money >= 2500) {
		money -= 2500;
		printf("Ŀ�� ���� �Ϸ�, �Ž�����: %d", money);
	}
	else
		printf("���� �����մϴ�.");

	int bread;
	char bread_input;
	
	printf("\n�� ���ſ��� �Է�(T/F) : ");
	/*
	scanf_s() �Լ��� ����ڰ� ���� Ű�� �Է��� ������ ���� ���ڰ� ���ۿ� ���� �Ǵµ�, �̴� ������ scanf_s() ȣ�⿡�� ������ ����ŵ�ϴ�.
	���� ���� ���Ÿ� ���� �տ� ���� �߰� �ʿ�
	*/
	scanf_s(" %c", &bread_input);

	if (bread_input == 'T' || bread_input == 't')
		bread = 1;
	else if (bread_input == 'F' || bread_input == 'f')
		bread = 0;
	else {
		printf("�߸��� �Է��Դϴ�.");
		return 1;
	}

	if (bread == 1) {
		money -= 1000;
		printf("�� ���� �Ϸ�, �Ž�����: %d", money);
	}
	else
		printf("���� �����մϴ�.");

}

void practice() {
	/*
	����
	: ����(������, ����)�� �Է¹ް�
	�ش� ���ڰ� ������/���ڿ��� ���° ���������� ����϶�.
	���� �����ڸ� �Է¹��� ��, ��ҹ��� ������ ������� ����϶�.
	*/

	// #include <ctype.h> ���� �ʿ�
	// ctype.h ������Ϸ� �Է¹��� ���ڰ� ����(isalpha)���� ��ҹ���(islower)���� ����(isdigit)���� ���� ����
	char char_input;
	int position;
	char reverse_char;

	printf("���ڸ� �Է��ϼ���: ");
	scanf_s("%c", &char_input);

	if (isalpha(char_input)) {
		if (islower(char_input)) {
			/*
			���⼭ 'a'�� ASCII �ڵ忡�� �ҹ��� ���ĺ� 'a'�� ���Դϴ�. C ���� ���ڴ� ASCII �ڵ� ������ ǥ���˴ϴ�.
			�ҹ��� ���ĺ� 'a'���� 'z'������ ���ӵ� ASCII �ڵ� ���� ���� �����Ƿ�, �� �ҹ��� ���ĺ��� 'a'�� ASCII �ڵ� �����κ��� �����ν� �� ���ĺ��� �� ��° ���������� ����� �� �ֽ��ϴ�.
			�̶� '+1'�� �ϴ� ������ ���ĺ��� ������ 1���� �����ϱ� �����Դϴ�.

			���� ���, �Էµ� ���ڰ� 'c'�� ��쿡��:

			'c'�� ASCII �ڵ� ���� 99���� 'a'�� ASCII �ڵ� ���� 97�� ���� 2�� �˴ϴ�.
			���⿡ 1�� ���Ͽ� ���������� 'c'�� ���ĺ����� 3��° �������� �� �� �ֽ��ϴ�.
			*/
			position = char_input - 'a' + 1;
			// ASCII �ڵ� 64���� 32�� ���� �� ���� �Է¹��� ���ڿ��� ���� �빮�ڷ� ������ �ƽ�Ű�ڵ� ���� ��µ�
			reverse_char = char_input - ('a' - 'A');
			printf("�ҹ��� -> �빮�� ���� ���: %c -> %c\n", char_input, reverse_char);
		}
		else {
			position = char_input - 'A' + 1;
			// ASCII �ڵ� 64���� 32�� ���� �� ���� �Է¹��� ���ڿ��� ���ϸ� �ҹ��ڷ� ������ �ƽ�Ű�ڵ� ���� ��µ�
			reverse_char = char_input + ('a' - 'A');
			printf("�빮�� -> �ҹ��� ���� ���: %c -> %c\n", char_input, reverse_char);
		}
		printf("%c�� �����ڿ��� %d��° �����Դϴ�.", char_input, position);

	}
	else if (isdigit(char_input)) {
		position = char_input - '0';
		printf("%c�� ���ڿ��� %d��° �����Դϴ�.", char_input, position);
	}
	else
		printf("�߸��� �Է��Դϴ�.");

}

void BackjunPractice2() {
	/*
	#2480 �ֻ��� ����
	1�������� 6������ ���� ���� 3���� �ֻ����� ������ ������ ���� ��Ģ�� ���� ����� �޴� ������ �ִ�.

	���� ���� 3���� ������ 10,000��+(���� ��)��1,000���� ����� �ް� �ȴ�.
	���� ���� 2���� ������ ��쿡�� 1,000��+(���� ��)��100���� ����� �ް� �ȴ�.
	��� �ٸ� ���� ������ ��쿡�� (�� �� ���� ū ��)��100���� ����� �ް� �ȴ�.
	���� ���, 3���� �� 3, 3, 6�� �־����� ����� 1,000+3��100���� ���Ǿ� 1,300���� �ް� �ȴ�. �� 3���� ���� 2, 2, 2�� �־����� 10,000+2��1,000 ���� ���Ǿ� 12,000���� �ް� �ȴ�. 3���� ���� 6, 2, 5�� �־����� ���� ���� ū ���� 6�̹Ƿ� 6��100���� ���Ǿ� 600���� ������� �ް� �ȴ�.

	3�� �ֻ����� ���� ���� �־��� ��, ����� ����ϴ� ���α׷��� �ۼ� �Ͻÿ�.

	�Է�
	ù° �ٿ� 3���� ���� ��ĭ�� ���̿� �ΰ� ���� �־�����.

	���
	ù° �ٿ� ������ ����� ��� �Ѵ�.
	*/

	int dice1, dice2, dice3;
	scanf_s("%d %d %d", &dice1, &dice2, &dice3);

	int money;
	if ((dice1 == dice2) && (dice2 == dice3)) {
		money = 10000 + dice1 * 1000;
		printf("%d", money);
	}
	else if((dice1 != dice2) && (dice1 != dice3) && (dice2 != dice3)) {
		int max = 0;
		max = ((dice1 > dice2) && (dice1 > dice3)) ? dice1 : ((dice2 > dice1) && (dice2 > dice3)) ? dice2 : dice3;
		money = max * 100;
		printf("%d", money);
	}
	else {
		int same = 0;
		same = ((dice1 == dice2) || (dice1 == dice3) && (dice2 != dice3)) ? dice1 : dice2 ;
		money = 1000 + same * 100;
		printf("%d", money);
	}

}

void main() {
	//BackjunPractice();
	//conditionalStatement();
	//practice();
	BackjunPractice2();
}