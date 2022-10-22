#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_07_1_5(void)
{
	int num;
	int i = 0;
	int j = 0;
	int sum = 0;
	double ave;
	printf("몇 개의 정수 입력할 건지: ");
	scanf("%d", &num);

	while (i<num)
	{
		printf("정수 입력: ");
		scanf("%d", &j);	// scanf 입력받을 때 & 빼먹지 말기!
		sum += j;
		i++;
	}

	ave = (double)sum / num;
	printf("%f", ave);

	return 0;
}