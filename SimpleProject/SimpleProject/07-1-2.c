#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_07_1_2(void)
{
	int num;
	int i = 0;
	printf("���� ���� �ϳ� �Է�: ");
	scanf("%d", &num);

	while (i<num)
	{
		printf("%d \n", 3 * (1+i++));
	}
	return 0;
}