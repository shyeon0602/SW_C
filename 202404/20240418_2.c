#include <stdio.h>

/*
����: main���� ���� num�� �Է¹ް�
����Լ��� ����ؼ� num�� ���� num!(���丮��) ���� ���
*/

int result = 1;
int factorial(int num) {
	//num *= (num - 1);
	//printf("%d", num);
	/*
	����!
	���丮�� ��Ģ �� 0! �� 1!�� 1�� ���ǵǾ�����
	*/
	if (num <= 1) return 1;		// ��ȯ���� 1 �̻��� ���丮�� ���� ��ȯ�ϵ��� ��
	return num * factorial(num - 1);
}

int realFactorial(int num) {
	for (int j = 1; j <= num; j++)
		result *= j;
	printf("�ݺ��� ���: %d", result);
}

int main() {
	int i;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d", &i);

	printf("����Լ� ���: %d", factorial(i));

	printf("\n");

	realFactorial(i);
}