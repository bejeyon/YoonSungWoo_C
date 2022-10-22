//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	int arr1[10], arr2[10];
//	int i = 0, j=0, k=0, l=0;
//	int tem;
//	printf("총 10개의 정수 입력: ");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	for (k = 0; k < 10; k++)
//	{
//		if (arr1[k] % 2 != 0)
//			arr2[k-j] = arr1[k];
//		else
//		{
//			arr2[9 - j] = arr1[k];
//			j++;
//		}
//	}
//	for (l = 0; l < 10; l++)
//	{
//		printf("%d, ", arr2[l]);
//	}
//	return 0;
//}