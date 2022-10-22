#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_03_1_3(void)
{
	int num1, result;
	printf("하나의 정수 입력: ");
	scanf("%d", &num1);
	result = num1 * num1;
	printf("하나의 정수의 제곱: %d", result);
	return 0;
}