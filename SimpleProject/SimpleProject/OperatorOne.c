#include <stdio.h>

int main_OperatorOne(void)
{
	int num1 = 9, num2 = 2;
	printf("%d+%d=%d \n", num1, num2, num1 + num2);
	printf("%d-%d=%d \n", num1, num2, num1 - num2);
	printf("%dx%d=%d \n", num1, num2, num1 * num2);
	printf("%d/%d�� ��=%d \n", num1, num2, num1 / num2);
	printf("%d/%d�� ������=%d \n", num1, num2, num1 % num2);
	return 0;
}