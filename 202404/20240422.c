#include <stdio.h>
#include <string.h>
// ���̺귯��: ��ɹ��� ��Ƶ� ����

int main() {
	char s[] = "string type";		// 12������ ������ �ڵ����� ������
	printf("���ڿ� s�� ����: %s\n", s);

	// strlen(char[]): ���ڿ� ���̸� ó��
	int len = strlen(s);
	printf("���ڿ� s�� ����: %d\n", len);

	// strcat(char[], char[]): 2�� ���ڿ� ����
	char h[20] = "hello";
	char b[] = "HiBye";
	strcat(h, b);		// strcat�� ����� h�� �����
	strncat(h, b, 2);		// b �迭 �� 2���ڸ� �߰��� ����� h�� �����
	printf("���ڿ� h + ���ڿ� b: %s", h);
}
