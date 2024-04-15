#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

void rewinder() {

	// 버퍼의 작동원리
	// 버퍼: 데이터를 임시저장하기 위한 공간
	// rewind() 함수 사용
	int num;
	char ch, c;
	scanf("%d %c", &num, &ch);
	rewind(stdin);		// 버퍼를 비워주는 역할
	scanf("%c", &c);
	printf("%d %c %c", num, ch, c);
}

void constNum() {
	int n1 = 5;
	n1 = 11;
	n1++;

	const int n2 = 10;		// 상수는 선언함과 동시에 초기화 필수
	//n2 = 10;		// 상수(const)는 값 수정 불가능
	//n2--;
	printf("%d", n2);
}

void constNumPractice() {
	// 예제: 반지름을 입력받고 원넓이를 출력하라
	// 원주율은 상수로 지정, #define으로 상수 선언
	int r;
	printf("반지름을 입력하세요: ");
	scanf("%d", &r);

	printf("%.2f", r * r * PI);

}

void getch() {
	// c의 경우, 별도 헤더파일 추가 없이 stdio.h 파일에 내장되어 있음

	char str[100];
	printf("문자를 입력하세요: ");		// printf는 개행 기준x
	// gets/puts는 개행 기준, 출력될 때도 개행되어 출력됨
	gets(str);		// 입력
	puts(str);		// 출력
}

void array() {
	// 2차원 배열: 행렬이 생김
	int array[2][3] = { 1,2,3,4,5,6 };		// 2행 3열

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
	구구단의 결과를 2차원 배열에 저장한 후 결과값 출력
	연산이 실행될 때 결과값 저장
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