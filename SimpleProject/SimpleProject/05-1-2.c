#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_05_1_2(void)
{
	double num1, num2;
	printf("두 개의 실수 입력: ");
	scanf("%lf %lf", &num1, &num2);
	printf("두 수의 사칙연산 결과: \n");
	printf("%f + %f = %f \n", num1, num2, num1 + num2);
	printf("%f - %f = %f \n", num1, num2, num1 - num2);
	printf("%f x %f = %f \n", num1, num2, num1 * num2);
	printf("%f / %f = %f \n", num1, num2, num1 / num2);
	return 0;
}