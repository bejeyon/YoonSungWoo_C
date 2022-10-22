#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 방법1
 
//int main(void)
//{
//	int total = 0, num = 1;
//
//	while (num!=0)
//	{
//		printf("정수 입력(0 to quit): ");
//		scanf("%d", &num);
//		total += num;
//	}
//	printf("합계: %d \n", total);
//	return 0;
//}

// 방법2

int main_07_3_1(void)
{
	int total = 0, num = 0;
	printf("정수 입력(0 to quit): ");
	scanf("%d", &num);
	total += num;

	while (num != 0)
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);
	return 0;
}