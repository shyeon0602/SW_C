#include <stdio.h>

/*
#����
1.
1���� 100���� ���ϴ� �Լ��� �����,
1+2+3.....+100=5050 �̶�� �޽����� ������ִ� �Լ�
�����(�� 5050���� ��ȯ���ش�)
1+2+3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+19+20+21+22+23+24+25+26+27+28+29+30+31+32+33+34+35+36+37+
38+39+40+41+42+43+44+45+46+47+48+49+50+51+52+53+54+55+56+57+58+59+60+61+62+63+64+65+66+67+68+69+70+71+
72+73+74+75+76+77+78+79+80+81+82+83+84+85+86+87+88+89+90+91+92+93+94+95+96+97+98+99+100
total=5050

2.
Sec(��) ���� �Է¹޾Ƽ� �ð��� h�� m�ʶ�� �� ����ϵ�, 3600�̻��� ���� ������
���� �޽����� ����Ѵ�.
�׸��� m ���� ��ȯ�Ѵ�.

3.
a���� b���� ���ϴ� �Լ��� �����
1x2x......xb=��� ����ϰ� ��ȯ�� �ִ� �Լ� �����
����
1x2x3x4x5
total=120
*/

// 1�� ����
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
	printf("��(sec)�� �Է��ϼ���: ");
	scanf("%d", &s);
}

int printTime() {
	getTime();
	
	h = s / 60;
	m = s % 60;

	if (s >= 3600) printf("Error");
	else printf("%d�� %d��", h, m);

}

int a, b;
int getNum() {
	printf("2���� ���ڸ� �Է��ϼ���: ");
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