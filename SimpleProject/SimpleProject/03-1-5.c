#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num1, num2, num3, result, min, plu, dev;
//	printf("세 개의 정수 입력: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
//	min = num1 - num2;
//	plu = num2 + num3;
//	dev = num3 % num1;
//	printf("%d %d %d", min, plu, dev);
//	printf("(%d-%d)x(%d+%d)x(%d\%%d)=%d", num1, num2, num2, num3, num3, num1, min*plu*dev);
//	printf("%d %d %d", min, plu, dev);
//	return 0;
//}

//int main(void)
//{
//	int num1, num2, num3, result1, result2, min, plu, dev;
//	printf("세 개의 정수 입력: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	min = num1 - num2;
//	plu = num2 + num3;
//	dev = num3 * num1;
//	result1 = min * plu;
//	result2 = result1 * dev;
//	printf("(%d-%d)x(%d+%d)x(%d\%%d)=%d", num1, num2, num2, num3, num3, num1, result2);
//	return 0;
//}

//int main(void)
//{
//	int num1, num2, num3;
//	int result;
//	printf("세 개의 정수 입력: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
//	printf("연산결과: %d \n", result);
//	return 0;
//}

int main_03_1_5(void)
{
	int num1, num2, num3, result;
	printf("세 개의 정수 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
	printf("( %d - %d ) x ( %d + %d ) x ( %d %% %d ) = %d", num1, num2, num2, num3, num3, num1, result);
	return 0;
}

//int main(void)
//{
//	int num1, num2, num3, result;
//	printf("세 개의 정수 입력: ");
//	scanf("%d %d %d", &num1, &num2, &num3);
//	result = (num1 - num2) * (num2 + num3) * (num3 % num1);
//	printf("%d", result);
//	return 0;
//}