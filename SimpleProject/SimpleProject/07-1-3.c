#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num;
//	int sum = 0;
//	printf("정수 입력: ");
//	scanf("%d", &num);
//
//	while (num!=0)
//	{
//		sum += num;
//		scanf("%d", num);
//	}
//	
//	printf("입력된 모든 정수의 합: %d", sum);
//	return 0;
//}

int main_07_1_3(void)
{
	int num = 1;
	int sum = 0;

	while (num != 0)
	{
		printf("정수 입력: ");
		scanf("%d", &num);
		sum += num;
	}

	printf("입력된 모든 정수의 합: %d", sum-1);
	return 0;
}