#include <stdio.h>

/*
예제: main에서 숫자 num을 입력받고
재귀함수를 사용해서 num에 대한 num!(팩토리얼) 값을 출력
*/

int result = 1;
int factorial(int num) {
	/*
	참고!
	팩토리얼 규칙 중 0! 과 1!은 1로 정의되어있음
	*/
	if (num <= 1) return 1;		// 반환값이 1 이상의 팩토리얼 값을 반환하도록 함
	return num * factorial(num - 1);
}

int realFactorial(int num) {
	for (int j = 1; j <= num; j++)
		result *= j;
	printf("증가 반복문 사용: %d", result);
}

int realFactorial2(int num) {
	result = 1;
	for (int k = num; k > 0; k--)
		result *= k;
	printf("감소 반복문 사용: %d", result);
}

int main() {
	int i;
	printf("숫자를 입력하세요: ");
	scanf("%d", &i);

	printf("재귀함수 사용: %d", factorial(i));

	printf("\n");

	realFactorial(i);

	printf("\n");
	
	realFactorial2(i);
}