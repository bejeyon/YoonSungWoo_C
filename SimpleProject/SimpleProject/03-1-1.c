#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_03_1_1(void)
{
	int num1, num2, min, mul;
	printf("2���� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &num1, &num2);

	min = num1 - num2;
	mul = num1 * num2;
	printf("�� ���� ������ ���: %d \n", min);
	printf("%d - %d = %d \n", num1, num2, min);
	printf("�� ���� ������ ���: %d \n", mul);
	printf("%d x %d = %d \n", num1, num2, mul);
	return 0;
}