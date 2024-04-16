#include <stdio.h>

/*
#예제
1.
1부터 100까지 더하는 함수를 만들되,
1+2+3.....+100=5050 이라는 메시지도 출력해주는 함수
만들기(단 5050값은 반환해준다)
1+2+3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+19+20+21+22+23+24+25+26+27+28+29+30+31+32+33+34+35+36+37+
38+39+40+41+42+43+44+45+46+47+48+49+50+51+52+53+54+55+56+57+58+59+60+61+62+63+64+65+66+67+68+69+70+71+
72+73+74+75+76+77+78+79+80+81+82+83+84+85+86+87+88+89+90+91+92+93+94+95+96+97+98+99+100
total=5050

2.
Sec(초) 값을 입력받아서 시간이 h분 m초라는 걸 출력하되, 3600이상의 값을 받으면
오류 메시지를 출력한다.
그리고 m 값은 반환한다.

3.
a부터 b까지 곱하는 함수를 만들고
1x2x......xb=결과 출력하고 반환값 주는 함수 만들기
예시
1x2x3x4x5
total=120
*/

// 1번 예제
int result = 0;
int sum() {
	for (int i = 1; i <= 100; i++)
	{
		result += i;
		if (i != 100) {
			printf("%d+", i);
		}
		else printf("%d\n", i);
	}
	printf("total=%d", result);
}

int h, m, s;
int getTime() {
	printf("초(sec)를 입력하세요: ");
	scanf("%d", &s);
}

int printTime() {
	getTime();
	
	h = s / 60;
	m = s % 60;

	if (s >= 3600) printf("Error");
	else printf("%d분 %d초", h, m);

}

int a, b;
int getNum() {
	printf("2개의 숫자를 입력하세요: ");
	scanf("%d %d", &a, &b);
}

int printMultiply(int num1, int num2) {
	long long int result = 1;
	for (long long int i = num1; i <= num2; i++)
	{
		result *= i;
		if (i == num2) printf("%lld ", i);
		else printf("%lldx", i);
	}
	printf("\ntotal=%lld", result);
}

int main() {
	sum();
	printf("\n");
	printf("\n");

	printTime();
	printf("\n");
	printf("\n");

	getNum();
	printMultiply(a, b);
	printf("\n");
}