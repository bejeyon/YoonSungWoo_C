#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_03_1_4(void)
{
	int num1, num2, sha, rem;
	printf("�� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);
	sha = num1 / num2;
	rem = num1 % num2;
	printf("�� ������ �������� �� ��� �Ǵ� ��: %d, ������: %d", sha, rem);
	return 0;
}