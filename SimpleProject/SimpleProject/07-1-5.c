#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_07_1_5(void)
{
	int num;
	int i = 0;
	int j = 0;
	int sum = 0;
	double ave;
	printf("�� ���� ���� �Է��� ����: ");
	scanf("%d", &num);

	while (i<num)
	{
		printf("���� �Է�: ");
		scanf("%d", &j);	// scanf �Է¹��� �� & ������ ����!
		sum += j;
		i++;
	}

	ave = (double)sum / num;
	printf("%f", ave);

	return 0;
}