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
	*/


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
	printf("Ŀ�� ���ſ��� �Է�( 1/0 ) : ");
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
	scanf_s("%c", &bread_input);

	if (bread_input == 'T' || bread_input == 't')
		bread = 1;
	else if (bread_input == 'F' || bread_input == 'f')
		bread = 0;
	else {
		printf("�߸��� �Է��Դϴ�.");
		return 1;
	}

	if (bread == 1) {
		bread -= 1000;
		printf("�� ���� �Ϸ�, �Ž�����: %d", bread);
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

void main() {
	//conditionalStatement();
	practice();
}