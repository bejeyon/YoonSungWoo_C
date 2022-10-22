#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num, sum, i;
//	num = 1;
//	sum = 0;
//	i=0;
//	
//	while (i<4)
//	{
//		printf("1 이상 정수 입력: ");
//		scanf("%d", &num);
//
//		while (num<1)
//		{
//			printf("틀렸습니다. 1 이상 정수 입력: ");
//			scanf("%d", &num);
//		}
//
//		while (num>=1&&i<4)
//		{
//			sum += num;
//			printf("1 이상 정수 입력: ");
//			scanf("%d", &num);
//			i++;
//		}
//
//	}
//	printf("다섯 개의 정수의 합: %d", sum);
//	return 0;
//}

//int main(void)
//{
//	int num, sum, i, j;
//	i = 0;
//	num = 1;
//
//	while (num>=1)
//	{
//		printf("1 이상 정수 입력: ");
//		scanf("%d", &num);
//		while (num >= 1)
//		{
//			scanf("%d", &num);
//			i++;
//			sum += num;
//		}
//	}
//	return 0;
//}

int main_07_2_1(void)
{
	int num, sum, i;
	sum = 0;
	i = 0;

	while (i < 5)
	{
		printf("1 이상 정수 입력: ");
		scanf("%d", &num);

		while (num < 1)
		{
			printf("틀렸습니다. 1 이상 정수 입력: ");
			scanf("%d", &num);
		}

		sum += num;
		i++;
	}
	printf("다섯 개의 정수의 합: %d", sum);
	return 0;
}