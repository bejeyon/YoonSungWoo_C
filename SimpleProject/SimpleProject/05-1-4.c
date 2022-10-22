#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_05_1_4(void)
{
	int ascii;	//char로 하면 되긴 하는데 오류 남
	printf("아스키 코드 값을 정수의 형태로 입력: ");
	scanf("%d", &ascii);
	printf("해당 정수의 아스키 코드 문자: %c", ascii);
	return 0;
}