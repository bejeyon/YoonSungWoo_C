#include <stdio.h>

int main_CommaOp(void)
{
	int num1 = 1, num2 = 2;
	printf("Hello "), printf("World! \n");
	num1++, num2++;
	printf("%d ", num1), printf("%d ", num2), printf("\n");
	return 0;
}