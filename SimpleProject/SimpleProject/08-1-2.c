#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_08_1_2_1(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	if (num1 >= num2)
		printf("�� ���� ��: %d", num1 - num2);
	else
		printf("�� ���� ��: %d", num2 - num1);

	return 0;
}

int main_08_1_2_2(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	printf("�� ���� ��: %d", num1 > num2 ? (num1 - num2) : (num2 - num1));

	return 0;
}