#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_07_4_1(void)
{
	int num1, num2;
	int total = 0;
	printf("두 개의 정수 입력(첫 번째 입력되는 정수보다 두 번째 입력되는 정수가 더 커야 한다): ");
	scanf("%d %d", &num1, &num2);
	printf("%d부터 %d까지의 정수들의 합계: ", num1, num2);
	for (; num1 <= num2; num1++)
	{
		total += num1;
	}
	printf("%d", total);
	return 0;
}