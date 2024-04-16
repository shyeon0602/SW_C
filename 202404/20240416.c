#include <stdio.h>

// 예제: int형 입력 3개 받음(a, b, c), a부터 b까지의 합을 구하라. c의 배수는 합에 포함x

int a = 0, b = 0, c = 0;

int getNum() {
	printf("3개 정수를 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);
}

int sum(int a, int b, int c) {
	int result = 0;

	for (int i = a; i <= b; i++)
		if (i % c != 0)result += i;

	printf("%d의 배수 제거\n%d에서 %d까지의 합: %d", c, a, b, result);
}

int main() {
	getNum();
	sum(a, b, c);
}