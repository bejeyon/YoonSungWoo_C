//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int arr[5][5];
//	int i=0, j=0;
//	for (i = 0; i < 4; i++)
//	{
//		if (i == 0)
//			printf("ö���� ");
//		else if (i == 1)
//			printf("ö���� ");
//		else if (i == 2)
//			printf("������ ");
//		else
//			printf("������ ");
//
//		for (j = 0; j < 4; j++)
//		{
//			if (j == 0)
//				printf("���� ���� �Է�: ");
//			else if (j == 1)
//				printf("���� ���� �Է�: ");
//			else if (j == 2)
//				printf("���� ���� �Է�: ");
//			else
//				printf("���� ���� �Է�: ");
//			
//			scanf("%d", &arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			arr[4][j] = 0;
//			arr[i][4] = 0;
//		}
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//			arr[i][4] += arr[i][j];
//	}
//
//	for (j = 0; j < 4; j++)
//	{
//		for (i = 0; i < 4; i++)
//			arr[4][j] += arr[i][j];
//	}
//
//	for (i = 0; i < 4; i++)
//	{
//		arr[4][4] += arr[i][4];
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		if (i == 0)
//			printf("ö���� ");
//		else if (i == 1)
//			printf("ö���� ");
//		else if (i == 2)
//			printf("������ ");
//		else if (i == 3)
//			printf("������ ");
//		else
//			printf("���� ���� ");
//		for (j = 0; j < 5; j++)
//		{
//			if (j == 0)
//				printf("���� ����: ");
//			else if (j == 1)
//				printf("���� ����: ");
//			else if (j == 2)
//				printf("���� ����: ");
//			else if (j == 3)
//				printf("���� ����: ");
//			else
//				printf("����: ");
//			printf("%d \n", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}