#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_08_3(void)
{
	int n;
	printf("0�̻��� ���� �Է�: ");
	scanf("%d", &n);

	switch (n/10)
	{
	case 0:
		printf("0�̻� 10 �̸�");
		break;
	case 1:
		printf("10�̻� 20 �̸�");
		break;
	case 2:
		printf("20�̻� 30 �̸�");
		break;
	default:
		printf("30�̻� ");
		break;
	}
	return 0;
}