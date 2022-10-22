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
//			printf("철희의 ");
//		else if (i == 1)
//			printf("철수의 ");
//		else if (i == 2)
//			printf("영희의 ");
//		else
//			printf("영수의 ");
//
//		for (j = 0; j < 4; j++)
//		{
//			if (j == 0)
//				printf("국어 점수 입력: ");
//			else if (j == 1)
//				printf("영어 점수 입력: ");
//			else if (j == 2)
//				printf("수학 점수 입력: ");
//			else
//				printf("국사 점수 입력: ");
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
//			printf("철희의 ");
//		else if (i == 1)
//			printf("철수의 ");
//		else if (i == 2)
//			printf("영희의 ");
//		else if (i == 3)
//			printf("영수의 ");
//		else
//			printf("과목별 총점 ");
//		for (j = 0; j < 5; j++)
//		{
//			if (j == 0)
//				printf("국어 점수: ");
//			else if (j == 1)
//				printf("영어 점수: ");
//			else if (j == 2)
//				printf("수학 점수: ");
//			else if (j == 3)
//				printf("국사 점수: ");
//			else
//				printf("총점: ");
//			printf("%d \n", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}