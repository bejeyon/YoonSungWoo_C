#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_03_1_1(void)
{
	int num1, num2, min, mul;
	printf("2개의 정수를 입력하시오: ");
	scanf("%d %d", &num1, &num2);

	min = num1 - num2;
	mul = num1 * num2;
	printf("두 수의 뺄셈의 결과: %d \n", min);
	printf("%d - %d = %d \n", num1, num2, min);
	printf("두 수의 곱셈의 결과: %d \n", mul);
	printf("%d x %d = %d \n", num1, num2, mul);
	return 0;
}