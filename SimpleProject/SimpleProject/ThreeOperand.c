#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_ThreeOperand(void)
{
	int num, abs;
	printf("���� �Է�: ");
	scanf("%d", &num);

	abs = num > 0 ? num : num * (-1);
	printf("���밪: %d \n", abs);
	return 0;
}