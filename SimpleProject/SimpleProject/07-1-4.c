#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_07_1_4(void)
{
	int dan;
	int i = 9;
	printf("출력을 원하는 구구단 단 숫자 입력: ");
	scanf("%d", &dan);

	while (i>=1)
	{
		printf("%d x %d = %d \n", dan, i, dan * i--);
	}
	return 0;
}