#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main(void)
//{
//	int num;
//	int sum = 0;
//	printf("���� �Է�: ");
//	scanf("%d", &num);
//
//	while (num!=0)
//	{
//		sum += num;
//		scanf("%d", num);
//	}
//	
//	printf("�Էµ� ��� ������ ��: %d", sum);
//	return 0;
//}

int main_07_1_3(void)
{
	int num = 1;
	int sum = 0;

	while (num != 0)
	{
		printf("���� �Է�: ");
		scanf("%d", &num);
		sum += num;
	}

	printf("�Էµ� ��� ������ ��: %d", sum-1);
	return 0;
}