#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_05_1_2(void)
{
	double num1, num2;
	printf("�� ���� �Ǽ� �Է�: ");
	scanf("%lf %lf", &num1, &num2);
	printf("�� ���� ��Ģ���� ���: \n");
	printf("%f + %f = %f \n", num1, num2, num1 + num2);
	printf("%f - %f = %f \n", num1, num2, num1 - num2);
	printf("%f x %f = %f \n", num1, num2, num1 * num2);
	printf("%f / %f = %f \n", num1, num2, num1 / num2);
	return 0;
}