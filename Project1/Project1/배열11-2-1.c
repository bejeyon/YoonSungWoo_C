#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	char str[50];
	printf("하나의 영단어를 입력하시오 : ");
	scanf("%s", str);
	printf("입력 받은 영단어 : %s \n", str);
	printf("입력 받은 영단어의 길이 : %d \n", sizeof(str));
	printf("%d", str[3]);
	
	return 0;
}