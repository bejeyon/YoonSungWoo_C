#include <stdio.h>

int main_ConvDiv(void)
{
	int num1 = 3, num2 = 4;
	double divResult;
	divResult = num1 / num2;
	printf("������ ���: %f \n", divResult);

	divResult = (double)num1 / num2;
	printf("������ ���: %f \n", divResult);
	return 0;
}