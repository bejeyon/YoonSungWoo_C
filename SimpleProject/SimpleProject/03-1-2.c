#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_03_1_2(void)
{
	int num1, num2, num3, result;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = num1 * num2 + num3;
	printf("%dx%d+%d=%d", num1, num2, num3, result);
	return 0;
}