#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ���1
 
//int main(void)
//{
//	int total = 0, num = 1;
//
//	while (num!=0)
//	{
//		printf("���� �Է�(0 to quit): ");
//		scanf("%d", &num);
//		total += num;
//	}
//	printf("�հ�: %d \n", total);
//	return 0;
//}

// ���2

int main_07_3_1(void)
{
	int total = 0, num = 0;
	printf("���� �Է�(0 to quit): ");
	scanf("%d", &num);
	total += num;

	while (num != 0)
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("�հ�: %d \n", total);
	return 0;
}