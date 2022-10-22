#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int MaxMeasure(int num1, int num2)
//{
//	int i;
//	if (num1 > num2)
//	{
//		for (i = num2; i > 0; i--)
//		{
//			if (num1%i==0 && num2 % i == 0)
//				break;
//		}
//	}
//	else
//	{
//		for (i = num1; i > 0; i--)
//		{
//			if (num1%i==0 && num2 % i == 0)
//				break;
//		}
//	}
//	return i;
//}
//
//int main(void)
//{
//	int num1, num2;
//	printf("두 개의 정수 입력: ");
//	scanf("%d %d", &num1, &num2);
//	printf("두 개의 정수의 최대 공약수: %d", MaxMeasure(num1, num2));
//	return 0;
//}

//int EuclideanAlgorithm(int num1, int num2)
//{
//	int num3;
//	if (num1 > num2)
//	{
//		while (1)
//		{
//			if (num1 % num2 == 0)
//				break;
//			num3 = num1;
//			num1 = num2;
//			num2 = num3 - num1;
//		}
//		return num2;
//	}
//	else
//	{
//		while (1)
//		{
//			if (num2 % num1 == 0)
//				break;
//			num3 = num2;
//			num2 = num1;
//			num1 = num3 - num2;
//		}
//		return num1;
//	}
//}
//
//int main(void)
//{
//	int num1, num2;
//	printf("두 개의 정수 입력: ");
//	scanf("%d %d", &num1, &num2);
//	printf("두 개의 정수의 최대 공약수: %d", EuclideanAlgorithm(num1, num2));
//	return 0;
//}