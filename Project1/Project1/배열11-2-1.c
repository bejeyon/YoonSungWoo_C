#include <stdio.h>
#pragma warning (disable:4996)

int main(void)
{
	char str[50];
	printf("�ϳ��� ���ܾ �Է��Ͻÿ� : ");
	scanf("%s", str);
	printf("�Է� ���� ���ܾ� : %s \n", str);
	printf("�Է� ���� ���ܾ��� ���� : %d \n", sizeof(str));
	printf("%d", str[3]);
	
	return 0;
}