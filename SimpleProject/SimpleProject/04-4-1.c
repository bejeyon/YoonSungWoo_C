#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num1, num2, num3;
//	printf("���� �� ���� �Է��Ͻÿ�: ");
//	scanf("%d", &num1);
//	num2 = 0;
//	//if (num1 >= 0)
//	//	num2 = (num1 ^ 0) + 1;
//	//else
//	//	num2 = (num1 - 1) ^ 0;
//	num3 = num1 ^ num2;
//	printf("�Է� ���� ���� ���� ��ȣ�� �ٲ� ������: %d", num2);
//	return 0;
//}

int main_04_4_1(void)
{
	int num1, num2;
	printf("���� �� ���� �Է��Ͻÿ�: ");
	scanf("%d", &num1);
	if (num1 >= 0)
		num2 = (~num1) + 1;
	else
		num2 = ~(num1 - 1);
	printf("�Է� ���� ���� ���� ��ȣ�� �ٲ� ������: %d", num2);
	return 0;
}