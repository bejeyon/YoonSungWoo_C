#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_Mul3Mul4(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num % 3 == 0 || num % 4 == 0)
			printf("3 �Ǵ� 4�� ���: %d \n", num);
	}
	return 0;
}