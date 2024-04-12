#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>		// �����޸� �Ҵ��� ���� �������

int BackjoonPractice1() {
	/*
	#10818 �ּ�, �ִ�
	N���� ������ �־�����. �̶�, �ּڰ��� �ִ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	ù° �ٿ� ������ ���� N (1 �� N �� 1,000,000)�� �־�����. ��° �ٿ��� N���� ������ �������� �����ؼ� �־�����. ��� ������ -1,000,000���� ũ�ų� ����, 1,000,000���� �۰ų� ���� �����̴�.

	���
	ù° �ٿ� �־��� ���� N���� �ּڰ��� �ִ��� �������� ������ ����Ѵ�.
	*/
	int n, temp;
	int max = -10000000, min = 10000000;

	scanf("%d", &n);
	/*int arr[n];*/		// backjoon �����Ϸ� �������� �迭 ũ�� ���� �Ҵ� ����
	long long* arr = (long long*)malloc(sizeof(long long) * n);		// ���� �޸� �Ҵ� malloc
	if (arr == NULL) {
		printf("�޸� �Ҵ� ����");
		return -1;		// ���α׷� ����
	}

	for (int i = 0; i < n; i++)
	{
		scanf("%lld", &arr[i]);
	}
	for (int k = 0; k < n-1; k++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
			min = arr[0];
			max = arr[n-1];
		}
	}
	printf("%d %d",min, max);

	free(arr);		// �������� �Ҵ��� �޸� ����
}

int BackjoonPractice2() {
	/*
	#27866 ���ڿ� ���ڿ�
	�ܾ�
	S�� ���� i�� �־����� ��, S�� i��° ���ڸ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	ù° �ٿ� ���� �ҹ��ڿ� �빮�ڷθ� �̷���� �ܾ� S�� �־�����. �ܾ��� ���̴� �ִ� 1,000�̴�.

	��° �ٿ� ���� i�� �־�����.

	���
	S�� i��° ���ڸ� ����Ѵ�.
	*/
	char s[1001];		// �迭�� ũ�� ������ �� ���ڿ��� �������� �ι��ڰ� ���� ������ +1�� ����� ��(���� �˳��� ����)
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
	#2743 �ܾ� ���� ���

	���ĺ����θ� �̷���� �ܾ �Է¹޾�, �� ���̸� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	ù° �ٿ� ���� �ҹ��ڿ� �빮�ڷθ� �̷���� �ܾ �־�����. �ܾ��� ���̴� �ִ� 100�̴�.

	���
	ù° �ٿ� �Է����� �־��� �ܾ��� ���̸� ����Ѵ�.
	*/
	char eng[101];
	int count = 0;

	scanf("%s", &eng);
	for (int i = 0; eng[i] != '\0'; i++) count++;
	printf("%d", count);

}

int BackjoonPractice4() {
	/*
	#10951 A + B - 4
	�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

	�Է�
	�Է��� ���� ���� �׽�Ʈ ���̽��� �̷���� �ִ�.

	�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� ������, �� �ٿ� A�� B�� �־�����. (0 < A, B < 10)

	���
	�� �׽�Ʈ ���̽����� A+B�� ����Ѵ�.
	*/
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", a + b);
	}
	return 0;
}

void Pointer() {
	// ������
	// ������ ���� �ȿ��� "����Ű���� �ϴ� ���� �ּ�"�� ������ ����
	// &(�ּ� ������), *(������ ������) ���

	// �Ϲ����� ���� ���
	int num = 5;
	printf("���� num�� �ּ�: %d\n", &num);
	printf("���� num�� ��: %d\n", num);

	// ������ ���� ��� -> ���� ����, �� ����, ���� �ʱ�ȭ
	int* ptNum;		// ���� ����: [�ڷ���] [*������] [������];
	ptNum = &num;		// �� ����: [�����̸�] = [&������][����ų ������];
	printf("%d\n", ptNum);		// num�� �ּҰ��� ����
	printf("%d\n", *ptNum);		// num�� ���� ����

}

void pointerPractice1() {
	/*
	1. int�� �迭 arr[5]�� �����صΰ� 5���� ���ڸ� �Է¹޴´�
	2. ������ ���� ptArr�� �����Ѵ�
	3. ptArr�� ���Ͽ� arr�� ������ ����ϴ� ����� 2������ �ִ�. 2������ ����� ã���ÿ�
	*/
	int arr[5];
	int* ptArr = arr;		// �迭�� �����ּҸ� ��ȯ

	printf("5���� ���� �Է�: ");
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
	//BackjoonPractice4();

	//Pointer();
	//pointerPractice1();
}