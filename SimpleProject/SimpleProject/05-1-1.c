#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_05_1_1(void)
{
	double x1, y1, x2, y2, x, y;
	printf("x1,y1��ǥ��鰪 �Է�: ");
	scanf("%lf %lf", &x1, &y1);
	printf("x2,y2��ǥ��鰪 �Է�: ");
	scanf("%lf %lf", &x2, &y2);
	if (x1 >= x2)
		x = x1 - x2;
	else
		x = x2 - x1;
	if (y1 >= y2)
		y = y1 - y2;
	else
		y = y2 - y1;
	printf("�� ���� �̷�� ���簢���� ����: %f", x * y);
	return 0;
}