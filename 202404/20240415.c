#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

void rewinder() {

	// ������ �۵�����
	// ����: �����͸� �ӽ������ϱ� ���� ����
	// rewind() �Լ� ���
	int num;
	char ch, c;
	scanf("%d %c", &num, &ch);
	rewind(stdin);		// ���۸� ����ִ� ����
	scanf("%c", &c);
	printf("%d %c %c", num, ch, c);
}

void constNum() {
	int n1 = 5;
	n1 = 11;
	n1++;

	const int n2 = 10;		// ����� �����԰� ���ÿ� �ʱ�ȭ �ʼ�
	//n2 = 10;		// ���(const)�� �� ���� �Ұ���
	//n2--;
	printf("%d", n2);
}

void constNumPractice() {
	// ����: �������� �Է¹ް� �����̸� ����϶�
	// �������� ����� ����, #define���� ��� ����
	int r;
	printf("�������� �Է��ϼ���: ");
	scanf("%d", &r);

	printf("%.2f", r * r * PI);

}

void getch() {
	// c�� ���, ���� ������� �߰� ���� stdio.h ���Ͽ� ����Ǿ� ����

	char str[100];
	printf("���ڸ� �Է��ϼ���: ");		// printf�� ���� ����x
	// gets/puts�� ���� ����, ��µ� ���� ����Ǿ� ��µ�
	gets(str);		// �Է�
	puts(str);		// ���
}

void array() {
	// 2���� �迭: ����� ����
	int array[2][3] = { 1,2,3,4,5,6 };		// 2�� 3��

	for (int i = 0; i < 2 ; i++)
	{
		for (int j = 0; j < 3 ; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
}

void arrayPractice() {
	/*
	�������� ����� 2���� �迭�� ������ �� ����� ���
	������ ����� �� ����� ����
	*/
	int multiplicationTables[10][10] = { 0 };
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			multiplicationTables[i][j] = i * j;
			if ((j == 1 && i != 1) || (j == 1 && i == 1)) continue;
			printf("%d x %d = %d ", j, i, multiplicationTables[i][j]);
		}
		printf("\n");
	}

}

int main() {
	//rewinder();
	//constNum();
	//constNumPractice();

	//getch();

	//array();
	arrayPractice();
}