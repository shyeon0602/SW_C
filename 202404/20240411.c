#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

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
		printf("�ܾ��� �����մϴ�. ������ �����մϴ�.");
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
				if (drink == i) {
					{
						coin -= list[i-1].money;
						if (coin <= 0) printf("�ܾ��� �����մϴ�.");
						else printf("%s, �Ž�����: %d\n", list[i-1].name, coin);
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
			printf("\n���� ������ �����մϴ�.");
			break;
		}
	}

}

int main() {
	loopPractice2_1();
}