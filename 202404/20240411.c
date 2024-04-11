#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int loopPractice2_1() {
	/*
	예제: 자판기 프로그램을 작성하시오
		사용자에게 동전을 입력받은 뒤, 음료 선택지 제시
		- 1. 콜라(1000원)
		- 2. 사이다(1100원)
		- 3. 포카리 스웨트(1800원)
		- 4. 레쓰비(800원)
		- 5. 카페라떼(2500원)
		- 0. 실행 종료

		사용자가 0을 입력하거나 더이상 음료를 살 수 없을 때 거스름돈을 제공하면서 실행 종료
	*/
	int coin, drink;
	printf("동전을 넣으세요: ");
	scanf("%d", &coin);

	if (coin < 800)
	{
		printf("잔액이 부족합니다. 실행을 종료합니다.");
		return 0;
	}

	printf("- 1. 콜라(1000원)\n- 2. 사이다(1100원)\n- 3. 포카리 스웨트(1800원)\n- 4. 레쓰비(800원)\n- 5. 카페라떼(2500원)\n- 0. 실행 종료\n");
	while (coin != 0)
	{
		printf("\n");
		printf("음료를 선택하세요(번호 입력): ");
		scanf(" %d", &drink);

		struct Drink
		{
			char name[30];
			int money;
		};

		struct Drink list[5] = {
			{"콜라", 1000},
			{"사이다", 1100},
			{"포카리 스웨트", 1800},
			{"레쓰비", 800},
			{"카페라떼", 2500}
		};

		if (coin >= 0 && drink > 0 && drink <= 5) {
			for (int i = 1; i <= 5; i++)
			{
				if (drink == i) {
					{
						coin -= list[i-1].money;
						if (coin <= 0) printf("잔액이 부족합니다.");
						else printf("%s, 거스름돈: %d\n", list[i-1].name, coin);
					};
				}
			}
		}
		else if (drink == 0)
		{
			printf("실행을 종료합니다. 이용해주셔서 감사합니다.");
			break;
		}
		else printf("음료를 다시 선택하세요.\n");

		if (coin <= 0) {
			printf("\n실행 종료을 종료합니다.");
			break;
		}
	}

}

int main() {
	loopPractice2_1();
}