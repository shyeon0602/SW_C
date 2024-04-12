#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int BackjoonPractice1() {
	/*
	#10818 최소, 최대
	N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.

	입력
	첫째 줄에 정수의 개수 N (1 ≤ N ≤ 1,000,000)이 주어진다. 둘째 줄에는 N개의 정수를 공백으로 구분해서 주어진다. 모든 정수는 -1,000,000보다 크거나 같고, 1,000,000보다 작거나 같은 정수이다.

	출력
	첫째 줄에 주어진 정수 N개의 최솟값과 최댓값을 공백으로 구분해 출력한다.
	*/
	//int n, temp;
	//int max = -10000000, min = 10000000;

	//scanf("%d", &n);
	//int arr[n];		// backjoon 컴파일러 내에서는 배열 크기 변수 할당 가능
	//for (int i = 0; i < n; i++)
	//{
	//	scanf("%d", &arr[i]);
	//	if (arr[i] > max) max = arr[i];
	//	if (arr[i] < min) min = arr[i];
	//}
	//int arr[]={ 0 };
	//for (int j = 0; j < n-1; j++)
	//{
	//	if (arr[j] > arr[j + 1]) {
	//		temp = arr[j];
	//		arr[j] = arr[j + 1];
	//		arr[j + 1] = temp;
	//	}
	//	min = arr[0];
	//	max = arr[n-1];
	//}
	//printf("%d %d",min, max);

}

int BackjoonPractice2() {
	/*
	#27866 문자와 문자열
	단어
	S와 정수 i가 주어졌을 때, S의 i번째 글자를 출력하는 프로그램을 작성하시오.

	입력
	첫째 줄에 영어 소문자와 대문자로만 이루어진 단어 S가 주어진다. 단어의 길이는 최대 1,000이다.

	둘째 줄에 정수 i가 주어진다.

	출력
	S의 i번째 글자를 출력한다.
	*/
	char s[1001];		// 배열의 크기 지정할 때 문자열은 마지막에 널문자가 들어가기 때문에 +1을 해줘야 함(공간 넉넉히 설정)
	int i;
	scanf("%s", &s);
	scanf("%d", &i);

	for (int j = 0; j < sizeof(s); j++)
	{
		if (s[j] == s[i-1]) { 
			printf("%c", s[i-1]); 
			break;
		}
		else continue;
	}

}

int BackjoonPractice3() {
	/*
	#2743 단어 길이 재기

	알파벳으로만 이루어진 단어를 입력받아, 그 길이를 출력하는 프로그램을 작성하시오.

	입력
	첫째 줄에 영어 소문자와 대문자로만 이루어진 단어가 주어진다. 단어의 길이는 최대 100이다.

	출력
	첫째 줄에 입력으로 주어진 단어의 길이를 출력한다.
	*/
	char eng[101];
	int count = 0;

	scanf("%s", &eng);
	for (int i = 0; eng[i] != '\0'; i++) count++;
	printf("%d", count);

}

void Pointer() {
	// 포인터
	// 포인터 변수 안에는 "가리키고자 하는 것의 주소"를 값으로 받음
	// &(주소 연산자), *(포인터 연산자) 사용

	// 일반적인 변수 사용
	int num = 5;
	printf("변수 num의 주소: %d\n", &num);
	printf("변수 num의 값: %d\n", num);

	// 포인터 변수 사용 -> 변수 선언, 값 설정, 변수 초기화
	int* ptNum;		// 변수 선언: [자료형] [*연산자] [변수명];
	ptNum = &num;		// 값 설정: [변수이름] = [&연산자][가리킬 변수명];
	printf("%d\n", ptNum);		// num의 주소값과 동일
	printf("%d\n", *ptNum);		// num의 값과 동일

}

void pointerPractice1() {
	/*
	1. int형 배열 arr[5]를 선언해두고 5개의 숫자를 입력받는다
	2. 포인터 변수 ptArr를 선언한다
	3. ptArr를 통하여 arr의 값들을 출력하는 방법이 2가지가 있다. 2가지의 방법을 찾으시오
	*/
	int arr[5];
	int* ptArr = arr;		// 배열의 시작주소를 반환

	printf("5개의 숫자 입력: ");
	for (int i = 0; i < 5; i++)
		scanf("%d", &arr[i]);
	
	for (int j = 0; j < 5; j++)
		printf("%d ", ptArr[j]);

	printf("\n");

	for (int k = 0; k < 5; k++)
		printf("%d ", *(ptArr+k));

}


int main() {
	//BackjoonPractice1();
	//BackjoonPractice2();
	//BackjoonPractice3();

	//Pointer();
	pointerPractice1();
}