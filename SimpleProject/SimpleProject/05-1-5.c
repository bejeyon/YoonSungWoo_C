#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main_05_1_5(void)
{
	char ch1;	// int������ ������ �� ��. �����Ⱚ�� �� ��... ����?
	printf("���ĺ� ���� �ϳ� �Է�: ");
	scanf("%c", &ch1);	// scanf������ %c�� char�����θ� ���� �� �ֳ���? -> ������ ���ͷ� ����� int�� �޾���.
	printf("�Է��� ���ĺ� ���ڿ� �ش��ϴ� �ƽ�Ű �ڵ� ��: %d", ch1);
	return 0;
}