#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_05_1_5(void)
{
	char ch1;	// int형으로 받으면 안 됨. 쓰레기값이 될 뿐... 왜죠?
	printf("알파벳 문자 하나 입력: ");
	scanf("%c", &ch1);	// scanf에서는 %c가 char형으로만 받을 수 있나봄? -> 문자형 리터럴 상수는 int로 받아짐.
	printf("입력한 알파벳 문자에 해당하는 아스키 코드 값: %d", ch1);
	return 0;
}