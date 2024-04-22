#include <stdio.h>
#include <string.h>
// 라이브러리: 명령문을 모아둔 공간

int main() {
	char s[] = "string type";		// 12글자의 공간이 자동으로 배정됨
	printf("문자열 s의 내용: %s\n", s);

	// strlen(char[]): 문자열 길이를 처리
	int len = strlen(s);
	printf("문자열 s의 길이: %d\n", len);

	// strcat(char[], char[]): 2개 문자열 연결
	char h[20] = "hello";
	char b[] = "HiBye";
	strcat(h, b);		// strcat의 결과는 h에 저장됨
	strncat(h, b, 2);		// b 배열 중 2글자만 추가한 결과값 h에 저장됨
	printf("문자열 h + 문자열 b: %s", h);
}
