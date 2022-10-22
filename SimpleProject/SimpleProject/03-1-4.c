#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_03_1_4(void)
{
	int num1, num2, sha, rem;
	printf("두 정수 입력: ");
	scanf("%d %d", &num1, &num2);
	sha = num1 / num2;
	rem = num1 % num2;
	printf("두 정수를 나누었을 때 얻게 되는 몫: %d, 나머지: %d", sha, rem);
	return 0;
}