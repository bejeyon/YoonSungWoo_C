#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_ThreeOperand(void)
{
	int num, abs;
	printf("정수 입력: ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("절대값: %d \n", abs);
	return 0;
}