#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_07_4_2(void)
{
	int num,i;
	int fac = 1;
	printf("1이상의 양의 정수 입력: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		fac *= i;
	}
	printf("%d의 계승 %d!: %d ", num, num, fac);
	return 0;
}