#include <stdio.h>

// 재귀함수: 자기자신을 부르는 함수

// 예제: 전달받은 n값을 따라서 n ~ 1까지 출력하는 함수 (n은 자연수)
int print(int n) {
	printf("%d ", n);
	if (n == 1) return 0;
	return print(n - 1);
}

int main() {
	int num;
	scanf("%d", &num);

	print(num);
}