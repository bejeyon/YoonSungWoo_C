#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num1, num2, num3;
//	printf("정수 한 개를 입력하시오: ");
//	scanf("%d", &num1);
//	num2 = 0;
//	//if (num1 >= 0)
//	//	num2 = (num1 ^ 0) + 1;
//	//else
//	//	num2 = (num1 - 1) ^ 0;
//	num3 = num1 ^ num2;
//	printf("입력 받은 정수 값의 부호를 바꾼 정수값: %d", num2);
//	return 0;
//}

int main_04_4_1(void)
{
	int num1, num2;
	printf("정수 한 개를 입력하시오: ");
	scanf("%d", &num1);
	if (num1 >= 0)
		num2 = (~num1) + 1;
	else
		num2 = ~(num1 - 1);
	printf("입력 받은 정수 값의 부호를 바꾼 정수값: %d", num2);
	return 0;
}