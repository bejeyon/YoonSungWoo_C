#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_07_1_1(void)
{
	int num;
	int i = 0;
	printf("���� ���� �ϳ� �Է�: ");
	scanf("%d", &num);

	while (i<num)
	{
		printf("Hello world! \n");
		i++;
	}
	return 0;
}