#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_07_4_1(void)
{
	int num1, num2;
	int total = 0;
	printf("�� ���� ���� �Է�(ù ��° �ԷµǴ� �������� �� ��° �ԷµǴ� ������ �� Ŀ�� �Ѵ�): ");
	scanf("%d %d", &num1, &num2);
	printf("%d���� %d������ �������� �հ�: ", num1, num2);
	for (; num1 <= num2; num1++)
	{
		total += num1;
	}
	printf("%d", total);
	return 0;
}