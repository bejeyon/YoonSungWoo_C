//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void DesSort(int ary[], int len)
//{
//	int i, j;
//	int temp;
//
//	for (i = 0; i < len - 1; i++)
//	{
//		for (j = 0; j < (len - i) - 1; j++)
//		{
//			if (ary[j] < ary[j + 1])
//			{
//				temp = ary[j];
//				ary[j] = ary[j + 1];
//				ary[j + 1] = temp;
//			}
//		}
//
//	}
//}
//
//int main(void)
//{
//	int arr[7];
//	int h;
//
//	printf("7개의 정수 입력: ");
//	for (int k = 0; k < 7; k++)
//		scanf("%d", &arr[k]);
//
//	DesSort(arr, sizeof(arr) / sizeof(int));
//	for (h = 0; h < 7; h++)
//		printf("%d ", arr[h]);
//
//	printf("\n");
//	return 0;
//}